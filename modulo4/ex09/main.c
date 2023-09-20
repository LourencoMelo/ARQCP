#include <stdio.h>
#include "calculate.h"

void print_result(char op, int o1, int o2, int res);

int main(void){

	int n1 = 3;
	int n2 = 4;
	
	char typeop1 = '+';
	char typeop2 = '*';
	char typeop3 = '-';
	
	int resultSum = n1 + n2;
	int resultMult = n1 * n2;
	
	print_result(typeop1, n1, n2, resultSum);
		
	print_result(typeop2, n1, n2, resultMult);
	
	int result = calculate(n1, n2);
	
	print_result(typeop3, resultSum, resultMult, result);
	
	return 0;
}

void print_result(char op, int o1, int o2, int res){
printf("%d %c %d = %d\n", o1, op, o2, res);
}
