#include <iostream>

using namespace std;

struct Rectangle
{
    private:
    int length;
    int width;
    public:
    void initializeRectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int areaRectangle()
    {
        return length * width;
    }
    void changeLength(int l)
    {
        length = l;
    }
    void changeWidth(int w)
    {
        width = w;
    }
    void print()
    {
        cout << "Rectangle:" << "?" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main()
{
    Rectangle r;
    r.initializeRectangle(10, 5);
    cout << "Area: " << r.areaRectangle() << endl;
    r.print();
    r.changeLength(20);
    r.print();
    Rectangle p;
    p.initializeRectangle(20, 10);
    cout << "Area: " << p.areaRectangle() << endl;
    p.print();
    p.changeWidth(5);
    p.print();
    return 0;
}
