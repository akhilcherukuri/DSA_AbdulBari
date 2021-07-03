#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int a = 10;
int *p;

int main(){
    p=&a;
    printf("%d\n", a);
    printf("%d\n", *p); /*dereference*/
    printf("%ld \n%ld \n",p,&a); 
}