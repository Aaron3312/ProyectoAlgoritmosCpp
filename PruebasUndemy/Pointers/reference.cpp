#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int &r = a;
    int *p = &a;
    r++;
    a = 20;
    cout << "this is the value of a: " << a << endl;
    cout << "this is the value of r: " << r << endl;
    cout << "this is the value of p: " << p << endl;
    return 0;
}