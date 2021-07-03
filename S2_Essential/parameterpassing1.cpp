#include <iostream>

using namespace std;

// call by value ( acutal parameter wont change)/ address / reference (c++ only)

void swap ( int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int a = 10, b = 25;
    swap(&a,&b);
    cout<< a << b << endl;

    return 0;
}
