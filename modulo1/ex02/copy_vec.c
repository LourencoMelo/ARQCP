void copy_vec(int *vec1,int *vec2, int n) {
	int loop;
		for (loop = 0;loop < n; loop++){
			*vec2 = *vec1;
			vec1++;
			vec2++;
		}
}
			
		
