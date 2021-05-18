#include<stdio.h>

/* https://www.geeksforgeeks.org/data-structure-alignment/ */

struct houseofcards
{
    int color;
    int cardsymbol;
    int cardpower;
};

int main(){
    struct houseofcards s2 = {1,3,8};
    printf("%d\n",s2.cardpower);
    s2.cardpower = 1;
    printf("%d\n",s2.cardpower);
    printf("%lu\n",sizeof(s2));
    
    return 0;
}
