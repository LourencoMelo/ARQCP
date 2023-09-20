#include <stdio.h>
#include "functions.h"


int main(void){
	int i = 4;
	int j = 8;
	int opt = 0;
	float result = 0;

	
	printf("Functions avaible:f(1) / f2(2) / f3(3) / f4(4) \n");
	printf("Choose one function :");
	scanf("%d" , &opt);
	result = functions(opt,i,j);
	printf("%.2f \n", result);


return 0;
}
