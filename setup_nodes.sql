-- create indexes on node table
ALTER TABLE nodes ADD PRIMARY KEY (id);
CREATE INDEX idx_nodes_geom ON nodes ( geom );
