#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

void initializeRectangle(Rectangle *r, int l, int w)
{
    r->length = l;
    r->width = w;
}

int areaRectangle(Rectangle r)
{
    return r.length * r.width;
}

void changeLength(Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    Rectangle r;
    initializeRectangle(&r, 10, 5);
    cout << "Area: " << areaRectangle(r) << endl;
    cout << r.length << endl;
    changeLength(&r, 20);
    cout << r.length << endl;
    return 0;
}