int activate_bits(int a, int left, int right){
    int n, j, mask, masked_a;

    masked_a = a;

    for (n = 0; n < left; n++) {
        mask = 0x80000000 >> n;
        masked_a = masked_a | mask;
    }

    for (j = 0; j < right; j++) {
        mask = 1 << j;
        masked_a = masked_a | mask;
    }

    return masked_a;
}
