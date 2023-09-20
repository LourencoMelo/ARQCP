/* Ex 07 */

#include <stdio.h>
#include "array_sort1.h"

int main(){
	int n; //variable of the size of the array
	int i; //variable to move in the array and read
	int j; //variable to move in the array to print it
	int k; //variable to show the array sorted
	
	printf("What is the size of the array you want to sort?: \n");
	scanf("%d", &n); 
	
	int array[n]; //Array of the numbers
	
	printf("Insert the numbers to fill the array\n");
	
	//Reads the numbers inserted by the user
	for(i=0; i < n; i++){
			printf("Number %d inserted: ", i);
			scanf("%d", &array[i]);
			printf("\n");
	}
	
	//Prints the original array
	printf("The original array");
	printf("Array = {");
	
	for(j=0; j < n -1; j ++){
		printf("%d", array[j]);	
	}
	
	printf("%d} \n", array[n-1]);
	
	//Function to sort the numbers
	array_sort1(array, n);
	
	printf("\n Now the array is sorted: {");
	for(k=0; k < n - 1; k++){
		printf("%d", array[k]);
	}
	printf("%d}", array[n-1]);
	
	return 0;
	
	
}	
