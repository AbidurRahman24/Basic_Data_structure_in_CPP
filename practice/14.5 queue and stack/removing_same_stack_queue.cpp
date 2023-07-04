#include <bits/stdc++.h>
using namespace std;
bool checkStackQueus(stack<int> & st,queue<int> &q)
    {
        if (st.size() != q.size())
        {
            return false;
        }
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                return false;
            }
            st.pop();
            q.pop();
        }
        return true;
    }
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    
    if (checkStackQueus(st, q))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}