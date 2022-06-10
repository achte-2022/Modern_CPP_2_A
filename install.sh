#Tejas Acharya
# @achte_te
#!/usr/bin/env bash
echo "Running install.sh"
cd build
rm -rf *
cmake ..
make
make install