#include <iostream>

using namespace std;

class Arithmetic
{
private:
    int a;
    int b;
public:
    Arithmetic(int a, int b);
    int add();
    int sub();
    int mul();
    int div();
    ~Arithmetic();
};

Arithmetic::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;
}

int Arithmetic::add()
{
    return a + b;
}

int Arithmetic::sub()
{
    return a - b;
}

int Arithmetic::mul()
{
    return a * b;
}

int Arithmetic::div()
{
    return a / b;
}

Arithmetic::~Arithmetic()
{
    cout << "Object destroyed" << endl;
}

int main()
{
    Arithmetic ar(10, 5);
    cout << ar.add() << endl;
    cout << ar.sub() << endl;
    cout << ar.mul() << endl;
    cout << ar.div() << endl;
    return 0;
}
