#include <iostream>

using namespace std;

int * funs(int size){
    int *p;
    p = new int[size];

    for (int i = 0; i < size; i++){
        p[i] =  i+1;
    }
    return p;
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    
}

void fun(int *A, int n){
    int Alengh = sizeof(A)/sizeof(A[0]);

    for (int i = 0; i < n; i++){
        cout << "this is the value of A: " << A[i] << endl;
    }
    cout << "this is the value of Alengh: " << Alengh << endl;
    A[0] = 15;


}

int main(){
    int a = 10;
    int r = 20;
    swap(a,r);
    cout << "this is the value of a: " << a << endl;
    cout << "this is the value of r: " << r << endl;

    cout << "intermediate" << endl;

    int A[] = {2,4,6,8,10}; int n = sizeof(A)/sizeof(A[0]);
    fun(A,n);
    cout << "this is the value of A[0]: " << A[0] << endl;

    for (int o:A){
        cout << "this is the value of a: " << o << endl;
    }

    cout << "intermediate" << endl;
    int *ptr, sz=10;
    ptr = funs(sz);
    for (int i = 0; i < sz; i++){
        cout << "this is the value of ptr: " << ptr[i] << endl;
    }

    return 0;
    }