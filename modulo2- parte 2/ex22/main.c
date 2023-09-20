#include <stdio.h>
#include "functions.h"

int i = 4;
int j = 8;
int f1();
int f2();
int f3();
int f4();

int main(void){
	int opt = 0;
	int result = 0;
	
	printf("Functions avaible:f(1) / f2(2) / f3(3) / f4(4) \n");
	printf("Choose one function :");
	scanf("%d" , &opt);
	if(opt == 1){
		result = f1();
		printf("Result: %d \n", result);
	}else if(opt == 2){
		result = f2();
		printf("Result: %d \n", result);
	}else if(opt == 3){
		result = f3();
		printf("Result: %d \n", result);
	}else if(opt == 4){
		result = f4();
		printf("Result: %d \n", result);
	}else{
		printf("Choose a avaible function");
	}


return 0;
}
