#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "tree";

    map<char,int> mp;

    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    vector<char> res;
    while(!mp.empty())
    {
        int count = 0;
        char ch;

        for(auto it: mp)
        {
            if(it.second > count)
            {
                ch = it.first;
                count = it.second;
            }
        }

        mp.erase(ch);
        res.push_back(ch);

       
    }

    for(char ch: res)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
    
}