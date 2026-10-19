//leetcode 283

#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {0,1,0,0,3,12};

    int count = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 0)
        {
            count++;
            nums.erase(nums.begin()+i);
            i--;
        }
    }

    while(count) {
        nums.push_back(0);
        count--;
    }

    for(auto it: nums) {
        cout<<it<<" ";
    }
    cout<<endl;
}