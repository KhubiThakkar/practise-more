#include "unity.h"
#include "ques.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_sum(void)
{
  TEST_ASSERT_EQUAL_((12,13), summation(10, 10,2,3));
  TEST_ASSERT_EQUAL((5,8), summation(1,3,4,5));
}

void test_diff(void)
{
  TEST_ASSERT_EQUAL((8,7), difference(10, 10,2,3));
  TEST_ASSERT_EQUAL((-3,-2), difference(1,3,4,5));
}

void test_mul(void)
{
  TEST_ASSERT_EQUAL((-10,50), multi(10, 10,2,3));
  TEST_ASSERT_EQUAL((-11,17), multi(1,3,4,5));
}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_div);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}
