/*Ex.17*/

#include <stdio.h>
#include "swap.h"

int main(){
	
	int i = 0;
	int vec1[10] = {1,2,3,4,5,6,7,8,9,10};
	int vec2[10] = {11,12,13,14,15,16,17,18,19,20};
	int size = 10;
	
	int *vec1Ptr = vec1;
	int *vec2Ptr = vec2;
	
	swap(vec1Ptr,vec2Ptr,size);
	
	printf("Vec1 after the swap : {");
	
	for(i = 0; i < size - 1; i ++){
		printf("%d;" , vec1[i]);
	}
	
	printf("%d} \n", vec1[i]);
	
	printf("Vec2 after the swap : {");
	
	for(i = 0; i < size - 1; i ++){
		printf("%d;" , vec2[i]);
	}
	
	printf("%d} \n", vec2[i]);
	
	return 0;
}

