int odd_sum(int *p){
	int i;
	int n;
	int sum = 0;
	n = p[0];
	
	for(i=1 ; i < n + 1; i++){
		if(*(p + i) % 2 != 0){
			sum = sum + *(p + i);
		}
	}
	
	return sum;
}
