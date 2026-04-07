#!/bin/bash

mkdir -p bench

./generator bench/tiny_10.txt 20 20 10 15 1001
./generator bench/tiny_30.txt 40 40 30 45 1002
./generator bench/tiny_100.txt 80 80 100 150 1003

echo "Generated tiny benchmark set in bench/"
