#include <stdio.h>
#include "fib.h"

unsigned int num = 0;


void FIB_printSeries(){
int t1 = 0, t2 = 1, temp = 0;
if(num == 0){
printf("%d\n",t1);
return;
}
if(num == 1){
printf("The sequence is: %d, ",t2);
num--;
FIB_printSeries();
}
printf("The sequence is: ");
printf("%d, %d, ",t1,t2);
for(int i = 2; i <= num - 1; i++){
temp = t2;
t2 = t1 + t2;
t1 = temp;
printf("%d, ",t2);
}
temp = t2;
t2 = t1 + t2;
t1 = temp;
printf("%d",t2);
printf("\n");

}
