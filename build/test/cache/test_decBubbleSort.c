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
