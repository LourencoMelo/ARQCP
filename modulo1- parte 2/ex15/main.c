/* Ex.15*/

#include <stdio.h>
#include "populate.h"
#include "check.h"
#include "inc_nsets.h"

int main(){
	int i = 0;
	
	/* IF WE WANT TO ASK THE USER THE VARIABLES
	
	int num;
	int limit;
	
	printf("How many numbers do you want your array to have? \n");
	scanf("%d", &num); // Atributes a number to "num"
	
	int vec[num]; // Inicializes the array vec with size num
	
	printf("Whats the limit? \n");
	scanf("%d", &limit); //Atributes a number to "limit"
	
	*/
	
	int num = 100;
	int vec[num];
	int limit = 20;
	
	int *vecPtr = vec;
	
	populate(vecPtr,num,limit);
	
	printf(" Here is your array populated : { ");
	
	for(i = 0; i < num - 2 ; i ++){
		printf(" %d; " , vec[i]);	
	}
	
	printf(" %d} \n", vec[num - 1]);
	
	for(i = 0; i < num;i++){
		 check(vec[i],vec[i + 1],vec[i + 2]);		
	}

return 0;
}
