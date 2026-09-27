#include<iostream>
using namespace std;

int x = 10;
int main()
{
    int x = 20;
    cout<<"X inside = "<<x<<endl;
    cout<<"X outside = "<<::x<<endl;

}