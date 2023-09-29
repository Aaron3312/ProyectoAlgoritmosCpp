#include <iostream>
#include <stdio.h>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    // generamos un random seed
    srand(time(NULL));
    // generamos un numero random entre 1 y 10

    int n, s;
    cout << "Enter the size: " << endl;
    cin >> n;
    int A[n];

    for (int i = 0; i < (sizeof(A) / sizeof(A[0])); i++)
    {
        cout << "Enter the elements: " << endl;
        cin >> s;
        A[i] = s;
    }

    for (int i : A)
    {
        cout << i << endl;
    }

    struct Card
    {
        int number;
        string shape;
        string color;
    };

    int random = rand() % 4 + 1;

    Card c1 = {1, "Heart", "red"};
    Card c2 = {2, "Diamond", "red"};
    Card c3 = {3, "Picas", "red"};
    Card c4 = {4, "Treboles", "red"};

    Card cards[4] = {c1, c2, c3, c4};

    cout << cards[random].number << endl;
    cout << cards[random].shape << endl;
    cout << cards[random].color << endl;
    int nums = 0;


    for (Card i : cards)
    {
        cout << i.number << " ";
        cout << i.shape << " ";
        cout << i.color << endl;
    }

    //cout << sizeof(A) << endl;
    //cout << A[2] << endl;
    //printf("%d\n", A[3]);
}
