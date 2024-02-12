#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                cout << i.first << endl;
            }
        }
    }

    return 0;
}