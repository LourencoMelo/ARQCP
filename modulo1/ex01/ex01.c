#include<stdio.h>

int main(){ 
	
	int i;
	int x = 5; //gives the value 5 to the variable x
	int *xPtr = &x; //*xPtr is initialized to the address of x
	float y = *xPtr + 3; //initializes y and gives it the value of x plus 3
	int vec[] = {10,11,12,13}; //initializes a array named vec

	printf(" The value of x is : %d \n" , x); // prints the value of x
	printf(" The value of y is : %.02f \n" ,y);// prints the value of y
	printf(" The adress of x is : %p \n" , &x);// prints the adress of x
	printf(" The adress of xPtr is : %p \n" , &xPtr);// prints the adress is xPtr
	printf(" The value pointed by xPtr is : %d \n" , *xPtr);// prints the value pointed by xPtr
	printf(" The adress of vec is : %p \n" , &vec);// prints the adress of the array vec
	for (i = 0; i < 4 ; i ++){ // a for cicle too go through the array vec
		printf(" The value of vec[%d] is : %d \n" , i ,vec[i]); // prints the value of vec[i]
		printf(" The adress of vec[%d] is : %p \n" , i ,&vec[i]); // prints the adress of vec[i]
	}
	
return 0;
}
