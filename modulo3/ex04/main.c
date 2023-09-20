#include <stdio.h>
#include "vec_add_one.h"


int num = 10;
int vec[10] = {1,2,4,5,8,4,4,2,3,7};

int *ptrvec = vec;

int main(void){
	int i;
	
	vec_add_one();
	
	printf("{");
	for(i = 0; i < num - 1; i++){
		printf("%d," , vec[i]);
	}

	printf("%d} \n", vec[num - 1]);
	
	return 0;
}
