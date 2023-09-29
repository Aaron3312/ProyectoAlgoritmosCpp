#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a = 101;
    int *p;
    p = &a;
    //p = (int *)malloc(5*2);

    printf("using pointer %d\nthis is will be the same? %d\nthis is the value %d\n", p, &a, *p);
    p = new int[5];
    cout << sizeof(p)<< endl;
    cout << a << endl;
    cout << sizeof(a) << endl;

    int A[5] = {1,2,3,4,5};
    int *q;
    q = A;
    cout << q[2] << endl;

    int *r;
    r = (int *)malloc(5*sizeof(int));
    r[0] = 10; r[1] = 15; r[2] = 20; r[3] = 11; r[4] = 5;

    for (int i = 0; i < 5; i++){
        cout << r[i] << endl;    }

    int *s;
    s = new int[5];
    s[0] = 10; s[1] = 15; s[2] = 20; s[3] = 11; s[4] = 5;
    cout << "this is the new array" << endl;
    for (int i = 0; i < 5; i++){
        cout << s[i] << endl;    }
    
    cout << "this is the new array" << endl;
    //las diferencias entre c y c++ estan chistosas
    delete [ ] p;
    delete [ ] r;
    delete [ ] s;
    //in c se usa free(), y en c++ se usa delete


    
    return 0;
}