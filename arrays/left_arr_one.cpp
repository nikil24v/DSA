#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,2,3,4,5};

    int ele = nums.front();
    //cout<<ele<<endl;
    nums.erase(nums.begin());

    nums.push_back(ele);

    for(auto it: nums)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}