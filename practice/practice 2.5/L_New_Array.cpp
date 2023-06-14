#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v= {1,2};
    // vector<int> v2= {3,4};
    // v.insert(v.begin(),v2.begin(),v2.end());
    // for(int x: v)
    // {
    //     cout<<x<<" ";
    // }
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
        
    }
    v.insert(v.begin(),v2.begin(),v2.end());
    
    for(int x: v)
    {
        cout<<x<<" ";
    }   

    return 0;
}