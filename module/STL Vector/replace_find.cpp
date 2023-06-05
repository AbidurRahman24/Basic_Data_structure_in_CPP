#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,2,9,4,10,50,80};
    // replace(v.begin(), v.end(),9,0);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    vector<int> v = {1, 2, 9, 4, 10, 50, 80};
    auto it = find(v.begin(), v.end(), 10);
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}