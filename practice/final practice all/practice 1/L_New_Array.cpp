#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    // vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }

    v.insert(v.begin(),v2.begin(),v2.end());
    
    for(int val: v)
    {
        cout<<val<<" ";
    }
    return 0;
}