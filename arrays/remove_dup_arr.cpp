#include<bits/stdc++.h>
using namespace std;
//leetcode 26 
int main() {

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int j = 0;
    for(int i=0;i<nums.size()-1;i++) {

        if(nums[i] == nums[i+1])
        {
            nums.erase(nums.begin()+i);
            i--;
        }
    }

    int count = 0;
    for(auto it: nums) {
        cout<<it<<" ";
        count++;
    }
    cout<<endl;

    cout<<"The Number Unique Elements is "<<count<<endl;
}