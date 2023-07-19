#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["sakib al hasan"] = 29;
    mp["Masrafi"] = 54;
    mp["Tamim"] = 54;

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}