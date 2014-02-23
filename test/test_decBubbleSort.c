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
void test_compareAndSwapSmallerToRight_should_not_swap_if_in_order_for_neg_num(){
	int array [] ={-2,-12};
	compareAndSwapSmallerToRight(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(-2,array[0]);
	TEST_ASSERT_EQUAL(-12,array[1]);
}
void test_compareAndSwapSmallerToRight_should_swap_if_in_order_for_neg_num(){
	int array [] ={-12,-2};
	compareAndSwapSmallerToRight(&array[0], &array[1]);
	TEST_ASSERT_EQUAL(-2,array[0]);
	TEST_ASSERT_EQUAL(-12,array[1]);
}
void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_2_element(){
	int array [] ={13,9};
	sortSmallestToRightMost(array, sizeof(array)/sizeof(int));
	TEST_ASSERT_EQUAL(13,array[0]);
	TEST_ASSERT_EQUAL(9,array[1]);
}
void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_3_element(){
	int array [] ={6,3,5};
	sortSmallestToRightMost(array, sizeof(array)/sizeof(int));
	TEST_ASSERT_EQUAL(6,array[0]);
	TEST_ASSERT_EQUAL(5,array[1]);
	TEST_ASSERT_EQUAL(3,array[2]);
}
void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_4_element(){
	int array [] ={10,5,2,1};
	sortSmallestToRightMost(array, sizeof(array)/sizeof(int));
	TEST_ASSERT_EQUAL(10,array[0]);
	TEST_ASSERT_EQUAL(5,array[1]);
	TEST_ASSERT_EQUAL(2,array[2]);
	TEST_ASSERT_EQUAL(1,array[3]);
}

