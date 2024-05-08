# ASSERT vs. EXPECT

`ASSERT` : if assertion fails, test will terminate immediatly & failure will be reported.
Other tests within same test case will NOT be executed.

`EXPECT` : if assertion fails, tests will continue executing & failure will be reported.
Progrsm will NOT be terminated.
Other tests within same test case will be executed.

Assertion macros :

1) EXPECT_TRUE (condition) : checks if condition is true
2) EXPECT_FALSE (condition) : checks if condition is false
3) EXPECT_NEAR (av, ev, tolerance) : checks if 2 floating values are equal within certain tolerance
4) EXPECT_EQ (av, ev) : checks if both values are EQual
5) EXPECT_STREQ (av, ev) : checks if strings are EQual
6) EXPECT_STRNE (av, ev) : checks if strings are Not Equal
7) EXPECT_GT (av, ev) : Greater Than
8) EXPECT_LT (av, ev) : Lesser Than
9) EXPECT_GE (av, ev) : Greater or Equal
10) EXPECT_LE (av, ev) : Lesser or Equal

1) ASSERT_TRUE (condition)
2) ASSERT_FALSE (condition)
3) ASSERT_NEAR (av, ev, tolerance)
4) ASSERT_EQ (av, ev)
5) ASSERT_STREQ (av, ev)
6) ASSERT_STRNE (av, ev)
7) ASSERT_GT (av, ev)
8) ASSERT_LT (av, ev)
9) ASSERT_GE (av, ev)
10) ASSERT_LE (av, ev)
