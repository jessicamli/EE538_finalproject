#!/bin/bash

make
./generator case1.txt 10 10 5 7 12345
./placement case1.txt
echo "Baseline run finished."
echo "Output file: placement_out.txt"