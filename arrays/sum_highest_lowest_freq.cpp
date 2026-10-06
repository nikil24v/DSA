#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,3,3,3};

    int min_count = INT_MAX;
    int max_count = INT_MIN;

    map<int,int> mp;

    for(auto it: nums)
    {
        mp[it]++;
    }

    for(auto it: mp)
    {
        if(it.second > max_count)
        max_count = it.second;

        if(it.second < min_count)
        min_count = it.second;
    }

    cout<<"The sum is "<<min_count + max_count<<endl;
}