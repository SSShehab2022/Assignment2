#include <stdlib.h>
#include "rand.h"
#include <stdio.h>

static int buffer;

void Rand_print(){
buffer = rand();
printf("%d\n",buffer);
}
