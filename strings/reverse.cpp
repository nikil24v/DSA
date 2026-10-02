#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> str = {'h','e','l','l','o'};

    int i = 0;
    int j = str.length() - 1;

    for( ; i<j;i++,j--)
    {
        swap(str[i],str[j]);
    }

    for(char s: str)
    cout<<s<<" ";
    cout<<endl;
}