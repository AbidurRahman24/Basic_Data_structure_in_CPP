#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long int pre[n];
    pre[0]= v[0];
    for (long long int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i-1];
    }
    for (long long int i = n-1; i >= 0; i--)
    {
        cout<<pre[i]<<" ";
    }
    
    
    return 0;
}