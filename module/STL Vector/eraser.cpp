#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,6,9,8,25,25,50};
    // v.erase(v.begin()+2); //one element delete
    v.erase(v.begin()+1, v.end()-1);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}