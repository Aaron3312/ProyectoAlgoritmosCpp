#include <iostream>

using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    T mul();
    T div();
    ~Arithmetic();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    if (typeid(T) == typeid(char))
    {
        cout << "You are using chars" << endl;
        cout << "the chars cant be added" << endl;
        //juntamos a y b en un char
        return a;
    }
    else if (typeid(T) == typeid(string))
    {
        cout << "You are using strings" << endl;
        //juntamos a y b en un string
        T c;
        c = a + b;
        return c;
    }
    else if (typeid(T) == typeid(int) || typeid(T) == typeid(float) || typeid(T) == typeid(double))
    {
        cout << "You are not using chars" << endl;
        T c;
        c = a + b;
        return c;
    }


}

//how do i stop debugger? whit 
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

template <class T>
T Arithmetic<T>::mul()
{
    return a * b;
}

template <class T>
T Arithmetic<T>::div()
{
    return a / b;
}

template <class T>
Arithmetic<T>::~Arithmetic()
{
    cout << "Object destroyed" << endl;
}


int main()
{
    Arithmetic<string> ar("A", "B");
    cout << ar.add() << endl;
    return 0;
}
