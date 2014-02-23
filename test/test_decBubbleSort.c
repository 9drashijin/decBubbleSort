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
void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_the_range100Toneg100(){
	int array [] ={100,75,50,25,0,-25,-50,-75,-100};
	sortSmallestToRightMost(array, sizeof(array)/sizeof(int));
	TEST_ASSERT_EQUAL(100,array[0]);
	TEST_ASSERT_EQUAL(75,array[1]);
	TEST_ASSERT_EQUAL(50,array[2]);
	TEST_ASSERT_EQUAL(25,array[3]);
	TEST_ASSERT_EQUAL(0,array[4]);
	TEST_ASSERT_EQUAL(-25,array[5]);
	TEST_ASSERT_EQUAL(-50,array[6]);
	TEST_ASSERT_EQUAL(-75,array[7]);
	TEST_ASSERT_EQUAL(-100,array[8]);

}
void test_bubbleSort_should_sort_properly_5_element(){
	int array [] ={33,11,22,8,3};
	decbubbleSort(array, sizeof(array)/sizeof(int));
	TEST_ASSERT_EQUAL(33,array[0]);
	TEST_ASSERT_EQUAL(22,array[1]);
	TEST_ASSERT_EQUAL(11,array[2]);
	TEST_ASSERT_EQUAL(8,array[3]);
	TEST_ASSERT_EQUAL(3,array[4]);
}

void test_sortSmallestToRightMost_should_sort_properly(){
	int array [] ={-100,0,-50,25,75,-25,50,100,-75};
	decbubbleSort(array, sizeof(array)/sizeof(int));
	TEST_ASSERT_EQUAL(100,array[0]);
	TEST_ASSERT_EQUAL(75,array[1]);
	TEST_ASSERT_EQUAL(50,array[2]);
	TEST_ASSERT_EQUAL(25,array[3]);
	TEST_ASSERT_EQUAL(0,array[4]);
	TEST_ASSERT_EQUAL(-25,array[5]);
	TEST_ASSERT_EQUAL(-50,array[6]);
	TEST_ASSERT_EQUAL(-75,array[7]);
	TEST_ASSERT_EQUAL(-100,array[8]);

}
