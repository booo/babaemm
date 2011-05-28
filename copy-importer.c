
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
    res = PQexec(conn, "BEGIN");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "COMMAND BEGIN failded: %s", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        exit(1);
    }
    while(fgets(buf,1024,stdin)) {
        printf("%s",buf);
        PQclear(res);
        PQputCopyData(conn, buf, strlen(buf));
        if(PQresultStatus(res) != PGRES_COMMAND_OK) {
            fprintf(stderr, "COMMAND COPY failded: %s", PQerrorMessage(conn));
            PQclear(res);
            PQfinish(conn);
            exit(1);
        }
    }
    int stop = PQputCopyEnd(conn, NULL);
    if(stop != 1) {
            fprintf(stderr, "COMMAND COPY failded: %s", PQerrorMessage(conn));
    }


}
