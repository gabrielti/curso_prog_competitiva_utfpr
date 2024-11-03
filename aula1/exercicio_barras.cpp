#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void)
{
    char S[100];

    cin >> S;

    for(int i = 0 ; i < 100; i++)
    {
        if(S[i] == '|')
        {
            S[i] = ' ';
        }
    }

    cout << S << endl;
}