#include "mymath.cpp"
#include "mymath.hpp"
#include <gtest/gtest.h>
 
TEST(SumTest, PositiveNos) { 
    mymath cadd;
    ASSERT_DOUBLE_EQ(7, cadd.calc_add(3,4));
    ASSERT_DOUBLE_EQ(6461008, cadd.calc_add(5764687,696321));
}
 
TEST(SumTest, NegativeNos) {
    mymath cadd;
    ASSERT_DOUBLE_EQ(-1, cadd.calc_add(-4,3));
    ASSERT_DOUBLE_EQ(-2796703, cadd.calc_add(5126792,-7923495));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}