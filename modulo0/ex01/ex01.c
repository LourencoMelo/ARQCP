#include <stdio.h> // needed for printf

int main(){
	
	printf("\nStorage size for char : %u\n", sizeof(char));
	printf("\nStorage size for int : %u\n", sizeof(int));
	printf("\nStorage size for unsigned int : %u\n" , sizeof(unsigned int));
	printf("\nStorage size for long : %u\n" , sizeof(long));
	printf("\nStorage size for long long : %u\n" , sizeof(long long));
	printf("\nStorage size for float : %d\n" , sizeof(float));
	printf("\nStorage size for double : %d\n" , sizeof(double));
	
	return 0;
}
