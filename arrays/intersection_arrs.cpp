#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums1 = {1,2,2,3,5};
    vector<int> nums2 = {1,2,7};

    vector<int> res;
    int n1 = nums1.size();
    int n2 = nums2.size();

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(nums1[i] == nums2[j]) {

                res.push_back(nums1[i]);
                nums2.erase(nums2.begin() + j);
                n2--;
                break;
            }
        }
    }
    
    for(auto it: res)
    cout<<it<<" ";
    cout<<endl;
}