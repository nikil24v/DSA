#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,1,0,1,1,1};

    int maxFreq = 0;
    int cnt = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 1)
        {
            cnt++;
            continue;
        }

        maxFreq = max(maxFreq,cnt);
        cnt = 0;
    }

    maxFreq = max(maxFreq,cnt);

    cout<<maxFreq<<endl;
}