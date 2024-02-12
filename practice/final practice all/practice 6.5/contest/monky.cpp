#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    while (getline(cin, sentence)) {
        stringstream ss(sentence);
        string word;
        map<string, int> mp;
        while (ss >> word) {
            sort(word.begin(), word.end());
            mp[word]++;
        }
        for (const auto& entry : mp) {
            cout << entry.first;
        }
        cout<<endl;
    }
    return 0;
}
