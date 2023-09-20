#include <stdio.h>
#include "sum_v3.h"

int op1 = 0;
int op2 = 0;
int op3 = 0;
int op4 = 0;

int main(void){
	int res3 = 0; //final result
	
	printf("Valor op1:");
	scanf("%d",&op1);
	
	printf("Valor op2:");
	scanf("%d",&op2);

	printf("Valor op3:");
	scanf("%d",&op3);c
	
	printf("Valor op4:");
	scanf("%d",&op4);
	
	res3 = sum_v3();
	
	printf("%d \n", res3);
	
	return 0;
}
