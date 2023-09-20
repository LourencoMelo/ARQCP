#include <stdio.h>
#include "asm.h"

int main(void) {
int res = 0;

printf("Valor op1:");
scanf("%d",&op1);

printf("Valor op2:");
scanf("%d",&op2);

res = sum();

printf("%d = %d + %d \n", res,op1, op2);

return 0;
}
