#include "rand.h"
#include "fact.h"
#include "fib.h"
#include <stdio.h>
#include <string.h>

int main(){
char buffer[255];
while(1){
printf("I am ready > ");
scanf("%s%[^\n]",buffer);
if( strcmp(buffer,"rand") == 0){
Rand_print();
continue;
}
if( strcmp(buffer,"fact") == 0 ){
FACT_printFactorial();
continue;
}

if( strcmp(buffer,"fib") == 0 ){
printf("Enter a number: ");
scanf("%d",&num);
FIB_printSeries();
continue;
}

printf("You said: %s\n",buffer);


}

}
