#include <iostream>

using namespace std;

int main()
{
    int *p;
    p = new int[5];
    p[0] = 12;
    p[1] = 15;
    p[2] = 25;
    p[3] = 23;
    p[4] = 18;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    delete []p;
    return 0;
}