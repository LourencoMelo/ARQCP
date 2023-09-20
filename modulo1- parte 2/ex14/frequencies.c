void frequencies(float *grades, int n, int *freq){
	int i;
	int nclass = 21;
	int k;
	int auxfreq;
	
	for(k=0; k < nclass; k++){
		*(freq + k) = 0;
	}
	
	for(i=0; i < n; i++){
		auxfreq = (int) *(grades + i);
		*(freq + auxfreq) = *(freq + auxfreq) + 1;
		printf("%d", auxfreq);
	}
}
