#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void prints(struct Rectangle &r){
    r.length = 20;
    cout << "this is the value of r.length: " << r.length << endl;
    cout << "this is the value of r.breadth: " << r.breadth << endl;

    
}

void printsptr(struct Rectangle *p){
    p->length = 20;
    cout << "this is the value of p.length: " << p->length << endl;
    cout << "this is the value of p.breadth: " << p->breadth << endl;
    p 

    
}

int main(){
    struct Rectangle r = {10,5};
    prints(r);
    printsptr(&r);
    cout << "this is the value of r.length main: " << r.length << endl;
    return 0;


    
}

