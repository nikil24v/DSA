#include<iostream>
using namespace std;

int main()
{
    int a = 6;
    int b = 4;

    int big = max(a,b);
    int x = big;

    while(x%a != 0 || x%b != 0)
    {
        x = x + big;
    }

    cout<<x<<endl;
}