#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator_sum(void)
{
  TEST_ASSERT_EQUAL(20, sum(15,5));
  TEST_ASSERT_EQUAL(10, sum(7,3));
}
void test_calculator_subtract(void)
{
  TEST_ASSERT_EQUAL(6, subtract(16,10));
  TEST_ASSERT_EQUAL(4, subtract(10,6));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculator_sum);
  RUN_TEST(test_calculator_subtract);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
