#include<bits/stdc++.h>
using namespace std;

bool sortedrnot(int arr[],int n)
{
    //bool val = true;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        return false;
    }

    return true;

}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto res = sortedrnot(arr,n);
    cout<<res<<endl;
}