#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st, newQ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int last;
    while (!st.empty())
    {
        int k = st.top();
        st.pop();
        if (st.empty())
        {
            last = k;
        }
        newQ.push(k);
    }
    st = newQ;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}