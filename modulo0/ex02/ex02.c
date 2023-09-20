#include <stdio.h>  // for declacration of printf  


//this function sums the two integers
int calc_sum(int n1, int n2){
	int n3 = n1 + n2;
	return n3;
}


//main 
int main(void) {
	int n1, n2 = 0;
	int n = 10;
	int sum = 0;
	do{
		printf("Enter the first integer: \n ");
		scanf("%d", &n1);
		printf("Enter the second integer: \n");
		scanf("%d", &n2);
		sum = calc_sum(n1, n2);
		printf("The sum is: %d \n", sum);
		printf("Checking is the sum is bigger than or equal 10...If not will be asked to enter again the numbers. \n");
	}
	while(sum >= n);
	
	printf("\n The sum is less than 10. Congratulations!");
	
	return 0;
}
