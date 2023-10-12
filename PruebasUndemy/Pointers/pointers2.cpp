#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};    

int main(){

    struct Rectangle r = {10,5};
    cout << "this is the value of r.length: " << r.length << endl;
    struct Rectangle *p = &r;
    p->length = 20;

    cout << "this is the value of r.length: " << r.length << endl;
    cout << "this is the value of p->length: " << p->length << endl;
    cout << "this is the value of r.breadth: " << r.breadth << endl;
    Rectangle *q;
    q = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    q->length = 15;
    q->breadth = 10;
    cout << "this is the value of q->length: " << q->length << endl;
    struct Rectangle &f = *q;
    cout << "this is the value of f.length: " << f.length << endl;

    
    

}