babaemm
=======

Babaemm is an import tool for osm. Probably the fastest seen on planet earth...

Compile babaemm
---------------

Just use cmake to create a makefile and run make.

``bash
    cmake .
    make
``

Execute babaemm
---------------

``bash
    ./parse-pbf *.osm.pbf | ./copy-importer database host username password
