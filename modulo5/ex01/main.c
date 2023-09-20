#include <stdio.h>

union union_u1{
char vec[32];
float a;
int b;
} u;

struct struct_s1{
char vec[32];
float a;
int b;
} s;

int main(void) {
	
	int sizeu = sizeof(u);
	int sizes = sizeof(s);
	
	printf("Size of the Union: %d\n", sizeu);
	printf("Size of hte Struct: %d\n", sizes);
	
	return 0;
}
