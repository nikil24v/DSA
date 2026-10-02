#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int odd = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 != 0)
        {
            odd++;
        }
    }

    cout<<"The Number of Odd numbers is "<<odd<<endl;
}