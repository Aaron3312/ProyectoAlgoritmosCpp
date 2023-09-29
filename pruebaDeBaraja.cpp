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
    Card baraja[52];

    //cout << cards[random].number << endl;
    //cout << cards[random].shape << endl;
    //cout << cards[random].color << endl;
    int nums = 0;

    for (int k = 1; k <= 52; k++)
    {
        // number
        baraja[nums].number = k;
        // shape
        if (k < 13){
            baraja[nums].shape = "Heart";}
        else if (k < 26){
            baraja[nums].shape = "Diamond";}
        else if (k <= 39){
            baraja[nums].shape = "Picas";}
        else if (k > 39){
            baraja[nums].shape = "Treboles";}
        // color
        if (k < 13){
            baraja[nums].color = "red";}
        else if (k < 26){
            baraja[nums].color = "red";}
        else if (k <= 39){
            baraja[nums].color = "black";}
        else if (k > 39){
            baraja[nums].color = "black";}
        if (k == 11 || k == 24 || k == 37){
            baraja[nums].shape = "Jota";}
        if (k == 12 || k == 25 || k == 38){
            baraja[nums].shape = "Reina";}
        if (k == 13 || k == 26 || k == 39){
            baraja[nums].shape = "Rey";}
        if (k == 1 || k == 14 || k == 27 || k == 40){
            baraja[nums].shape = "As";
            baraja[nums].number = {};
            }
            
        nums++;
        
    }
            

    for (Card i : baraja)
    {
        cout << i.number << " ";
        cout << i.shape << " ";
        cout << i.color << endl;
    }

    //cout << sizeof(A) << endl;
    //cout << A[2] << endl;
    //printf("%d\n", A[3]);
}
