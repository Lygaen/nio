#include <gtest/gtest.h>

TEST(types, char)
{
    ASSERT_EQ(sizeof(char), 1);
    ASSERT_EQ(sizeof(signed char), 1);
    ASSERT_EQ(sizeof(unsigned char), 1);
}

TEST(types, bool)
{
    ASSERT_EQ(sizeof(bool), 1);
}

TEST(types, short)
{
    ASSERT_EQ(sizeof(short), 2);
    ASSERT_EQ(sizeof(signed short), 2);
    ASSERT_EQ(sizeof(unsigned short), 2);
}

TEST(types, int)
{
    ASSERT_EQ(sizeof(int), 4);
    ASSERT_EQ(sizeof(signed int), 4);
    ASSERT_EQ(sizeof(unsigned int), 4);
}

TEST(types, float)
{
    ASSERT_EQ(sizeof(float), 4);
}

TEST(types, double)
{
    ASSERT_EQ(sizeof(double), 8);
}

TEST(types, long)
{
    ASSERT_EQ(sizeof(long), 8);
    ASSERT_EQ(sizeof(unsigned long), 8);
}

TEST(types, pointer)
{
    ASSERT_EQ(sizeof(void *), 8);
}