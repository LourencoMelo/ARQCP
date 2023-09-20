#include <stdio.h>
#include "vec_greater20.h"

long long int *ptrvec;
int num;

int main(void){
	num =5;
	long long int vec[]= {24,25,6,7,9};
	ptrvec = vec;
	int result = vec_greater20();
	printf("Result of numbers greater than 20: %d \n", result);
	return 0;
}
