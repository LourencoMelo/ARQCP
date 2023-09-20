
#include <stdio.h>
#include "frequencies.h"

int main(){
	int n = 5;
	float grades[] = {0.6, 3.3, 9, 20, 7.8};
	int nclass = 21;
	int freq[nclass];
	int i;

	
	float *gradesPtr = grades;
	int *freqPtr = freq;
	
	
	frequencies(gradesPtr,n,freqPtr);
	
	printf("Freq: {");
	
	for(i=0; i < nclass; i++){
		printf("%d;",freq[i]);
	}
	printf("}");
	
	return 0;
}
