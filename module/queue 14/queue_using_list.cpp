#include<bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
    list<int>l;
        // 1 ST OPARATION
        void push (int val)
        {
            l.push_back(val);
        }
        // 2NO OPARATION
        void pop()
        {
            l.pop_front();
        }
        // 3rd OPARATION
        int front()
        {
            return l.front();
        }
        // 4th OPARATION
        int size()
        {
            l.size();
        }
        // 5th OPARATION
        bool empty()
        {
            return l.empty();
        }
};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout<< q.front()<<endl;
        q.pop();
    }
    
    
    return 0;
}