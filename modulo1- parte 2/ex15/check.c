#include "inc_nsets.h"

int check (int x, int y, int z){
	
	if(x < y && y < z){
		inc_nsets();
		return 1;	
	}else{
		return 0;
	}

}
