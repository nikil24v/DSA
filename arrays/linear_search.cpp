#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>&nums,int target)
{
    for(int i=0;i<nums.size();i++)
    {
        if(target == nums[i])
        return i;
    }

    return  -1;
}
int main()
{
    vector<int> nums = {2,3,4,5,3};
    int target = 6;

    auto res = linear_search(nums,target);

    if(res >= 0)
    cout<<"Element is Found at index "<<res<<endl;
    else
    cout<<"Element "<<target<<" is not found!"<<endl;

    return 0;
}