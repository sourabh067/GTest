#include <gtest/gtest.h>
#include "add.h"

TEST(AddTest,PositiveNumbers){
    EXPECT_EQ(add(12,3),9);
    ASSERT_EQ(add(1,8),11);
    
}
int main(int argc ,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
