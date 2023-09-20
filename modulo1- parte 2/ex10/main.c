/* Ex 10 */

#include <stdio.h>
#include "odd_sum.h"

int main(){
	int i;
	int n;
	
	printf("How many numbers would you want in the array?: \n");
	scanf("%d", &n);
	
	
	int array[n+1];
	array[0] = n;
	
	//Reading the numbers inserted into the array
	printf("Insert the numbers to the array: \n");
	for(i = 1; i< n + 1; i++){
		printf("Number %d inserted:", i);
		scanf("%d", &array[i]);
		printf("\n");
	}
	
	odd_sum(array);
	return 0;
}
