#include <stdlib.h>

void populate( int *vec , int num, int limit){
	int i = 0;
	
	for(i = 0; i < num ; i ++){
		*(vec + i)  = (rand() % 20) + 0;
	}
}
