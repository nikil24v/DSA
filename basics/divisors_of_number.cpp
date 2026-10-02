#include<iostream>
#include<vector>
using namespace std;

vector<int> divisors(int n)
{
    vector<int> div;

    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            div.push_back(i);
        }
    }

    return div;
}
int main()
{
    int num;
    cout<<"Enter the number u want to find the Divisors.."<<endl;
    cin>>num;

    auto res = divisors(num);
    for(auto it: res)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}