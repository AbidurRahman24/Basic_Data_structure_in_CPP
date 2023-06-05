#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // vector<int> v(5); value 5ta output hobe but zero value kore
    // vector<int> v(5, 17); //5 value 17 kore hobe
    // vector<int> v2(5,100);
    // vector<int> v(v2); //copy 
    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);
    vector<int> v={2,10,3};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}