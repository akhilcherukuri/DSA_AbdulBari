#include <iostream>

using namespace std;

// call by value ( acutal parameter wont change)/ address / reference (c++ only)
// printing array

void printarray( int *A, int n){
    int i;
    for(i=0; i<n; i++){
        cout << A[i] << endl;
    }
}

int main(){
    
    int A[] ={2,4,6,8,10};
    printarray( A, sizeof(A)/sizeof(int));
    A[0] = 0;
    printarray( A, sizeof(A)/sizeof(int));
    return 0;
}
