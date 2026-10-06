#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,3,3,3};

    map <int,int> mp;

    for(auto it: nums)
        mp[it]++;

    int firstCount = 0, firstVal = -1;
    int secondCount = 0, secondVal = -1;

        for (auto it : mp) {
            int num = it.first;
            int count = it.second;

            if (count > firstCount) {
               
                secondCount = firstCount;
                secondVal = firstVal;
                firstCount = count;
                firstVal = num;
            }
            else if (count < firstCount && count > secondCount) {
                
                secondCount = count;
                secondVal = num;
            }
        }

        cout<<"The Second most Occuring Element is "<<secondCount<<endl;
}