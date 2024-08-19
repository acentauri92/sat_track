extern "C"{
  #include "sat.h"
}

#include "CppUTest/TestHarness.h"

int testNumber = 10; 

TEST_GROUP(build_test)
{
    void setup()
    {

    }

    void teardown()
    {

    }
};


TEST(build_test, test)
{
  LONGS_EQUAL(0, 0);
}