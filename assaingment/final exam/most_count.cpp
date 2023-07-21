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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int mxVal = INT_MIN;
        int mxCnt = 0;

        for (auto i : mp)
        {
            if (i.second > mxCnt || (i.second == mxCnt && i.first > mxVal))
            {
                mxCnt = i.second;
                mxVal = i.first;
            }
        }
        cout << mxVal << " " << mxCnt << endl;
    }
    return 0;
}