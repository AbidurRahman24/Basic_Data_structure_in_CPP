#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    // priority_queue<int> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    
    int t;
    cin>>t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
            if(!pq.empty())
            {
                cout << pq.top() << endl; // O(1)
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if (c == 1)
        {
            if(!pq.empty())
            {
                cout << pq.top() << endl; // O(1)
            }
            else
            {
                cout<<"Empty"<<endl;
            }
            
        }
        else if( c==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                    cout << pq.top() << endl; // O(1)
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    // while(!pq.empty())
    // {
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }
    return 0;
}

// else if (c == 1)
        // {
        //     pq.pop(); // O(logN)
        // }
        // else if (c == 2)
        // {
        //     cout << pq.top() << endl; // O(1)
        // }
        // else
        // {
        //     cout << pq.top() << endl; // O(1)
        //     cout<<"Empty"<<endl;
        //     // break;
        // }