cmake_minimum_required(VERSION 2.8)
PROJECT(babaemm)

include_directories(/usr/include/postgresql/)
ADD_EXECUTABLE(node-parser node-parser.c fileformat.pb-c.h osmformat.pb-c.h fileformat.pb-c.c osmformat.pb-c.c)
TARGET_LINK_LIBRARIES(node-parser z protobuf-c geos_c)
ADD_EXECUTABLE(way-parser way-parser.c fileformat.pb-c.h osmformat.pb-c.h fileformat.pb-c.c osmformat.pb-c.c)
TARGET_LINK_LIBRARIES(way-parser z protobuf-c geos_c)
ADD_EXECUTABLE(copy-importer copy-importer.c)
TARGET_LINK_LIBRARIES(copy-importer pq)
