// Exercise 3

#include <stdio.h> // for declaration of printf

int ntotal = 30;

//this function calculates the average of the values on the array
int calc_avg(int array[]){
	int j, sum, avg;
	for(j = 0; j < ntotal; j++){
		sum =+ array[j];
	}	
	avg = sum / ntotal;
	return avg;
}

//main
int main(void){
	int array[ntotal], i;
	int result = 0;
	for (i = 0; i < ntotal; i++){
		printf("Insert a number : \n");
		scanf("%d", &array[i]);	
	}
	result = calc_avg(array);
	printf("The average of the numbers are: %d", result);
	return 0;	
}
