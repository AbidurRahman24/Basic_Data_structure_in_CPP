#include<bits/stdc++.h>
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
        if (v[i] > 0)
            v[i] = 1;
        else if (v[i] < 0)
            v[i] = 2;
    }
    // replace(v.begin(),v.end(),2,100);
    for(int val: v)
    {
        cout<<val<<" ";
    }
    return 0;
}