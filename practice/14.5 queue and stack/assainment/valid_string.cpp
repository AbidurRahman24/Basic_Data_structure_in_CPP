#include <bits/stdc++.h>
using namespace std;
bool validString(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == 'A' || c == 'B')
        {
            if(!st.empty() && (c == 'B' && st.top() == 'A' || c == 'A' && st.top() == 'B'))
            {
                st.pop();
            } else {
                st.push(c);
            }
        }
    }
    return st.empty();
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (validString(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
