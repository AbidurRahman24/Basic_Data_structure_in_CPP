#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        cnt[val]++;
    }
 
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
 
            cout << char(i +'a') << " " << ":"  << " " << cnt[i] << endl;
        }
    }
 
    return 0;
}