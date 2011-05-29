#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>


int main(int argc, char ** argv) {
    char buf[1024];
    PGconn *conn;
    PGresult *res;

    const char *conninfo;
    conninfo = "dbname = xapi_testing host = db.osm.spline.de user = xapi password = osmforlife";
    conn = PQconnectdb(conninfo);
    if(PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Connection to database failed: %s", PQerrorMessage(conn));
        PQfinish(conn);
        exit(1);
    }
    res = PQexec(conn, "BEGIN;");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "COMMAND BEGIN failded: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }
    res = PQexec(conn, "COPY nodes (id, version, user_id, tstamp, changeset_id, tags, geom) FROM STDIN DELIMITER ';'");
    if (PQresultStatus(res) != PGRES_COPY_IN) {
        fprintf(stderr, "COMMAND COPY FROM STDIN failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }
    while(fgets(buf,1024,stdin)) {
        //PQclear(res);
        int success = PQputCopyData(conn, buf, strlen(buf));
        if(success == 1)
            printf("%s",buf);
        /*if(PQresultStatus(res) != PGRES_COMMAND_OK) {
            fprintf(stderr, "COMMAND COPY failed: %s", PQerrorMessage(conn));
            PQclear(res);
            PQfinish(conn);
            exit(1);
        }*/
    }
    /*if(!PQgetResult(conn)) {
        fprintf(stderr, "COMMAND COPY END failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }*/
    if(PQputCopyEnd(conn, NULL)) {
        printf("termination data send\n");
    }
    while((res = PQgetResult(conn)) != NULL) {
        printf("waiting...\n");
    }
    if(res != NULL) {
        fprintf(stderr, "COMMAND PUT COPY END failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }
    PQendcopy(conn);
    while((res = PQgetResult(conn)) != NULL) {
        printf("waiting too...\n");
    }
    /*if(PQgetResult(conn)) {
        fprintf(stderr, "COMMAND COPY END failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }*/
    res = PQexec(conn, "END;");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "COMMAND END failed: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }

    PQfinish(conn);
    return EXIT_SUCCESS;
}
