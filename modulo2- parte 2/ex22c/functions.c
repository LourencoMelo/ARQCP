#include <stdio.h>

float functions(int opt,int i,int j){
	float h = 0;
	float g = 0;
	float r = 0;
	if(opt == 1){
		if(i == j){
			h = i - j + 1;
		}else{
			h = i + j - 1;	
		}
		return h;
	}
	
	if(opt == 2){
		if(i > j){
			i = j - 1;
		}else{
			i = j +1;	
		}
		h = i * j;
		return h;	
	}
	
	if(opt == 3){
		if (i >= j) {
			h = i * j;
			g = i + 1;
		}else {
			h = i + j;
			g = i + j + 2;
		}
		r = g / h;
	return r;
	}

	if (opt == 4){
		if (i + j < 10){
			h = 4 * i * i;
		}else{
			h = j * j / 3;
		}
	return h;	
	}

return 0;

}
