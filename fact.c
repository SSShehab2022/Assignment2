#include "fact.h"
#include <stdio.h>

void FACT_printFactorial(){
unsigned int buffer = 0;
printf("Enter a number: ");
scanf("%d",&buffer);
unsigned int helper = 1;
for(int i = 2; i <= buffer; i++ ){
helper = helper * i;
}
printf("Result is: %d\n",helper);
}
