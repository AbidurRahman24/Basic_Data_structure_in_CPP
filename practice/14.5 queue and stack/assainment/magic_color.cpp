#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> newSt;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        stack<char> st;
        for (char c : s){
            if ((c == 'R' && c == 'B')||(c == 'B' && c == 'R'))
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else{
                    if (c == 'B' && st.top() == 'R')
                    {
                        st.push(c);
                        st.pop();
                    }
                    else if (c == 'G' && st.top() == 'R')
                    {
                        st.push(c);
                        st.pop();
                    }
                    else if (c == 'B' && st.top() == 'G')
                    {
                        st.push(c);
                        st.pop();
                    }
                }
            }
        }
    }
    
    return 0;
}