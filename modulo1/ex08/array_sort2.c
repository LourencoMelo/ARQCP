void array_sort2(int *vec, int n){
	int i;
	int j;
	int temp;
	//2 cicles of for to pass through the array and sort it
	for(i=0; i<n; i++){
		for(j= i +1; j < n; j++){
			if(vec[j] < vec[i]){
				temp = vec[i];
				*(vec + i) = *(vec + j);
				*(vec+ j) = temp;
			}
		}
	}
}
