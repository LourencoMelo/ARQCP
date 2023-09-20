#include <stdio.h>
#include "even_tests.h"

int even;
int test_even();
int vec_sum_even();
int vec[] = {1,15,2,3,4,45,22,2,10,12};
int num = 10;

int *ptrvec = vec;

int main(void){
	
	//int result = test_even();
	//printf("%d \n", result);

	int sum = vec_sum_even();
	printf("%d \n", sum);
	
return 0;
}
