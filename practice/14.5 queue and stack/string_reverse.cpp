#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin >> s;
    for (char c : s)
    {
        st.push(c);
    }
    string reversedString;
    while (!st.empty())
    {
        reversedString += st.top();
        st.pop();
    }

    cout << reversedString << endl;
    return 0;
}