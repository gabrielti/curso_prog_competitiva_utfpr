#include<iostream>
#include<stdlib.h>

using namespace std; //especifica que vem do modulo STD

void exercicio3()
{
    char C;

    cin >> C;

    while(int(C) <= 121)
    {
        cout << char(C+1) << endl;
        C = C+1;
    }
}

/*
void exercicio2(){
    int a,b;
    char op;

    cin >> a >> op >> b;

    if(op == '+')
    {
        cout << a + b << endl;
    }

    else if(op == '*')
    {
        cout << a*b << endl;
    }

    else if(op == '/')
    {
        cout << a/b << endl;
    }

    else
    {
        cout << a - b << endl;
    }
}*/

/*
void exercicio1(){
    int a,b;
    cin >> a >> b;

    double discount = 100 * (1.0 - double(b)/a); //casting

    cout << discount << endl;
}*/


int main()
{
    cout << "Hello World" << endl;
    //exercicio1();
    exercicio3();
    return 0;
}
