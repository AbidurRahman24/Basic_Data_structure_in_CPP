#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        stack<char> st;
        stack<char> newSt;
        for (int i = 0; i < N; i++)
        {
            char c = colors[i];
            if (!st.empty())
            {
                char top = st.top();
                if ((c == 'R' && top == 'B') || (c == 'B' && top == 'R'))
                {
                    st.pop();
                    st.push('P');
                    continue;
                }
                else if ((c == 'R' && top == 'G') || (c == 'G' && top == 'R'))
                {
                    st.pop();
                    st.push('Y');
                    continue;
                }
                else if ((c == 'B' && top == 'G') || (c == 'G' && top == 'B'))
                {
                    st.pop();
                    st.push('C');
                    continue;
                }
                else if((c == 'B' && top=='B' )||(c == 'R' && top=='R')|| c == 'G' && top=='G')
                {
                    st.pop();
                    continue;
                }
                
            }

            st.push(c);
        }

        string result;
        
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }
        
        cout << result << endl;
    }

    return 0;
}
