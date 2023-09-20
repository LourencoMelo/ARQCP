#include <stdio.h>
#include "vec_zero.h"

short int array[] = {100,15,200,8,25,500};
int num = 6;
short int *ptrvec = array;


int main(void){
	
	int total;
	int i = 0;
	
	total = vec_zero();
	
	printf("{");
	for(i = 0; i < num - 1; i++){
		printf("%u," , array[i]);
	}

	printf("%u} \n", array[num - 1]);
	
	
	printf("%d \n", total);
	
return 0;	
}
