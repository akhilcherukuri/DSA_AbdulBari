#include <stdio.h>
#include <stdlib.h>

struct rectangle{
    int length;
    int breath;
};

int main(){
    struct rectangle *p;
    p= (struct rectangle *)malloc(sizeof(struct rectangle)); //Stores in HEAP
    p->breath = 5;
    p->length = 10;
    printf("%d %d \n", p->length, p->breath );
}