#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

    struct Rectangle{
        int length;
        int breadth;
    };

int main(){
    int A[5] = {1,2,3,4,5};

    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4; p[4] = 5;
    cout << "this is the value of p: " << p[1] << endl;

    int *d;
    d = new int[5];
    d[0] = 1; d[1] = 2; d[2] = 3; d[3] = 4; d[4] = 5;
    for (int i = 0; i < 5; i++){
        cout << "this is the value of d: " << d[i] << endl;}
   

    free(d);
    delete [ ] p;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout << "this is the size of p1: " << sizeof(p1) << endl;
    cout << "this is the size of p2: " << sizeof(p2) << endl;
    cout << "this is the size of p3: " << sizeof(p3) << endl;
    cout << "this is the size of p4: " << sizeof(p4) << endl;
    cout << "this is the size of p5: " << sizeof(p5) << endl;
    
    
    return 0;
}