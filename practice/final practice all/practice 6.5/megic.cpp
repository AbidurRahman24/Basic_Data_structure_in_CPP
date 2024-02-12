#include <bits/stdc++.h>
using namespace std;
bool validParent(string s)
{
    for(char c:s)
    {
        if(c == 'R' || c == 'B' || c == 'G')
        {
            st.pust(c);
        }
    }
}
int main()
{
    stack<char> st; 
    stack<char> newSt;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x; 
        // st.push(x); 
        validParent(x);
    }
    bool validParent(char s)
    {
    for(char c:s)
    {
        if(c == 'R' || c == 'B' || c == 'G')
        {
            st.pust(c);
        }
    }
    }
    while (!st.empty()) 
    {
        
        cout << st.top();
        st.pop(); 
    }

    return 0;
}