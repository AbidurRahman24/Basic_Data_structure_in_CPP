#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        string mxStr;
        int cnt = 0;

        while (ss >> word)
        {
            mp[word]++;
            if( mp[word] > cnt)
            // mp[word] > cnt || (mp[word] == cnt && word.length() > mxStr.length())
                cnt = mp[word];
        }
        cout << word << " " << cnt << endl;
    }

    return 0;
}
