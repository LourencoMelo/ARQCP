#include <stdio.h>
#include "vec_search.h"

int *ptrvec;
int searchedNumber = 2;

int main(void){
	int vec[]= {1,2,5,7,8,7};
	ptrvec = vec;
	
	int result = vec_search();
	
	printf("This is the location of the number: %d \n", result);
	
	return 0;
}
