#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try {

        if(b == 0)
        throw "Divide by Zero";

    }

    catch(const char*s)
    {
        cout<<s<<endl;
    }
}