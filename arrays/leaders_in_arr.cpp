#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,5,3,1,2};
    vector<int> res;

    // for(int i=0;i<nums.size()-1;i++)
    // {
    //     int j = i+1;
    //     for(;j<nums.size();j++)
    //     {
    //        if(nums[i] < nums[j])
    //        break;
    //        else
    //        {
    //             continue;
    //        }
    //     }

    //     if(j == nums.size())
    //     res.push_back(nums[i]);

        
    // }


    int maxi = INT_MIN;

    for(int i=nums.size()-1;i>=0;i--)
    {
        if(nums[i] > maxi)
        {
            res.push_back(nums[i]);
            maxi = nums[i];
        }
    }

    reverse(res.begin(),res.end());

    for(auto it: res)
    cout<<it<<" ";
    cout<<endl;
}