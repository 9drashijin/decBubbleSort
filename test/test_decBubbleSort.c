#include "unity.h"
#include "decBubbleSort.h"

void setUp(){}
void tearDown(){}

void test_compareAndSwapSmallerToRight_should_not_swap_if_in_order(){
	int array [] ={12,2};
	compareAndSwapSmallerToRight(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(12,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
}
void test_compareAndSwapSmallerToRight_should_swap_if_in_order(){
	int array [] ={2,12};
	compareAndSwapSmallerToRight(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(12,array[0]);
	TEST_ASSERT_EQUAL(2,array[1]);
}