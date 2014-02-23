#include "unity.h"
#include "decBubbleSort.h"


void setUp(){}

void tearDown(){}



void test_compareAndSwapSmallerToRight_should_not_swap_if_in_order(){

 int array [] ={12,2};

 compareAndSwapSmallerToRight(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((12)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)10, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)11, UNITY_DISPLAY_STYLE_INT);

}

void test_compareAndSwapSmallerToRight_should_swap_if_in_order(){

 int array [] ={2,12};

 compareAndSwapSmallerToRight(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((12)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

}

void test_compareAndSwapSmallerToRight_should_not_swap_if_in_order_for_neg_num(){

 int array [] ={-2,-12};

 compareAndSwapSmallerToRight(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((-2)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-12)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)23, UNITY_DISPLAY_STYLE_INT);

}

void test_compareAndSwapSmallerToRight_should_swap_if_in_order_for_neg_num(){

 int array [] ={-12,-2};

 compareAndSwapSmallerToRight(&array[0], &array[1]);

 UnityAssertEqualNumber((_U_SINT)((-2)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-12)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}

void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_2_element(){

 int array [] ={13,9};

 sortSmallestToRightMost(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((13)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

}

void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_3_element(){

 int array [] ={6,3,5};

 sortSmallestToRightMost(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

}

void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_4_element(){

 int array [] ={10,5,2,1};

 sortSmallestToRightMost(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

}

void test_sortSmallestToRightMost_should_move_Smallest_to_the_end_for_the_range100Toneg100(){

 int array [] ={100,75,50,25,0,-25,-50,-75,-100};

 sortSmallestToRightMost(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((100)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((75)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((50)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((25)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-25)), (_U_SINT)((array[5])), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-50)), (_U_SINT)((array[6])), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-75)), (_U_SINT)((array[7])), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-100)), (_U_SINT)((array[8])), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);



}

void test_bubbleSort_should_sort_properly_5_element(){

 int array [] ={33,11,22,8,3};

 decbubbleSort(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((33)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)71, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

}



void test_sortSmallestToRightMost_should_sort_properly(){

 int array [] ={-100,0,-50,25,75,-25,50,100,-75};

 decbubbleSort(array, sizeof(array)/sizeof(int));

 UnityAssertEqualNumber((_U_SINT)((100)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((75)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((50)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((25)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-25)), (_U_SINT)((array[5])), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-50)), (_U_SINT)((array[6])), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-75)), (_U_SINT)((array[7])), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-100)), (_U_SINT)((array[8])), (((void *)0)), (_U_UINT)87, UNITY_DISPLAY_STYLE_INT);



}
