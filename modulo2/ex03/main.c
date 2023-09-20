#include <stdio.h>
#include "sum_v2.h"

int op1 = 0;
int op2 = 0;

int main(void) {
int res2 = 0;  // result 


printf("Valor op1:"); // Saves the value of op1
scanf("%d",&op1);

printf("Valor op2:"); // Saves the value of op2
scanf("%d",&op2);

res2 = sum_v2(); // Calls the function

printf("%d \n", res2); // Shows the wanted result

return 0;
}
