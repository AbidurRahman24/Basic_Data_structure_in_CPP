#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        if(x==0)
        {
            string nm;
            cin>>nm;
            q.push(nm);
        }
        else if (x==1)
        {
            if (q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<< endl;
                q.pop();
            }
        }
    }

    return 0;
}
