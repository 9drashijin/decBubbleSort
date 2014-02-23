#include <stdio.h>
#include "decBubbleSort.h"
#include <conio.h>

int main(void){

	int size;
	int value, count;
	int intArray[100]; // Available array slot of 100 only
	
	printf("Please Enter the size of Array :");
	scanf("%i",&size);	
	printf("Array size of %i.\n\n", size);
	printf("Please Enter the value to the Array\n");
	
	for(count = 0; count < size; count++){
		printf("Array of %i :",count+1);
		scanf("%i",&value);
		intArray[count] = value;
	}
	printf("\nDecending BubbleSort Array\n");
	printf("==========RESULT==========\n");
	decbubbleSort(intArray,size);

	for(count = 0; count < size; count++){
		if(count == (size-1)){
			printf("%i ",intArray[count]);
			break;
		}
		printf("%i ,",intArray[count]);
	}
	getch();
	return 0;
}