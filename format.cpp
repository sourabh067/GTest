#include <gtest/gtest.h>
using namespace std;

TEST (TestSuite, TestCase) {
// test logic
}

int main(int argc , char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}

// <gtest/gtest.h> if GTest is installed in system dir 
// "gtest/gtest.h" if GTest is in project dir

// TEST : is marco provided by GTest which is used to define test cases
// TestSuiteName : Specifies the name of the test suite to which the test case belongs. Test suites are used to logically group related test cases together.
// TestCaseName : Specifies the name of the test case

// main() : responsible for initializing the test environment & running all test cases
// (int argc, char** argv) : command-line arguments 
// int argc : argument count; number of cmd-line arguments passed to program; including program name itself
// char** argv : argument vector; pointer to c-style string array; each string represents cmd-line argument; first string argv[0] is always program name.

// testing::InitGoogleTest(&argc,argv) : initializing GTest & allowing it to handle any testing related cmd-line arguments before running tests

// RUN_ALL_TESTS() : tell GTest to run all tests & return exit code based on results; 
// if returns 0 then all tests passed
// returns non-zero when any test fails
