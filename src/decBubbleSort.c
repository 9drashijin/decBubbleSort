#include "decBubbleSort.h"

void compareAndSwapSmallerToRight(int *first, int *second){

	int temp;
	if(*first <*second){
	temp = *second;
	*second =*first;
	*first = temp;
	}
	
}

void sortSmallestToRightMost(int *array, int size){
	
	int i;
	for(i=0 ; i<size-1 ; i++){
		compareAndSwapSmallerToRight(&array[i],&array[i+1]);
	}
	
}


void decbubbleSort(int *array, int size){
	
	for( ;size >=1 ; size--){
	sortSmallestToRightMost(array,size);
	}
	
}