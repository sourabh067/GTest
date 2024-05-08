# C++ Google Testing Framework
# GTest 

cmd :
g++ -std=c++14 -o test_file test_file.cpp file.cpp -lgtest -lgtest_main -pthread

./test_file

====================================
`gtest` & `gtest_main` are libraries

`-l` : this flag links libraries to test file

`-pthread` : this flag links with the pthread library, which is necessary for multi-threading support.
