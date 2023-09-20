int sum = 0;

int sum_even( int *p, int num){
	int loop;
	for (loop = 0; loop < num; loop++){
		if (*p % 2 == 0){
			sum = sum + *p;
			p++;
		}else{
			p++;
		}
	}
	return sum;
}	
