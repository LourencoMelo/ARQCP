/* Ex.03 */

#include <stdio.h>
#include "sum_even.h"

int main(){
	
	int num = 15;
	int array[] = {3,3,3,3,04,3,3,3,3,3,03,3,3,3,3};
	int *aPtr = array;
	
	sum_even(aPtr, num);
	
	printf("The sum of even numbers in the array is : %d \n", sum);
	
	return 0;
}	

