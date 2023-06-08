#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        auto it=find(v.begin(),v.end(),v[i]);
        if(it ==v.end()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}