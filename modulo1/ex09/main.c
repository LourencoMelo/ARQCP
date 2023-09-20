#include <stdio.h>
#include "sort_without_reps.h"

int main(){
	int n = 10;
	int src[]= {1,3,25,3,-23,23,4,4,2,0};
	int dest[n];
	int i;
	
	int *srcPtr = src;
	int *destPtr = dest;
	
	sort_without_reps(srcPtr,n,destPtr);
	
	printf("Array dest with only the non repited numbers {");
	
	for(i = 0; i < placed - 1 ; i++){
		printf("%d;" , dest[i]);
	}
	
	printf("%d} \n ", dest[placed - 1]);
	
	printf("%d \n" , placed); 
	
return 0;
}
