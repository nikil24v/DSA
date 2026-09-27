#include<iostream>
using namespace std;

int main()
{
    // string str;
    // cout<<"Enter the string: ";
    // getline(cin,str);

    char str[30];
    cout<<"Enter the String: ";
    cin.getline(str,sizeof(str));

    cout<<str<<endl;
}