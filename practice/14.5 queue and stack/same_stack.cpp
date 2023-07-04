#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myStack
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz=0;
        // 1 no operation
        void push(int val)
        {
            sz++;
            Node * newNode = new Node(val);
            if(head == NULL)
            {
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next = newNode;
            tail = tail->next;
        }
        // 2 no oparation;
        void pop()
        {
            sz--;
            Node * deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL)
            {
                tail=NULL;
            }
        }
        // 3no oparation
        int top()
        {
            return head->val;
        }
        // 4NO Oparation
        int size()
        {
            return sz;
        }
        // 5NO Oparation
        bool empty()
        {
            if(sz == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
bool checkValAndSize(myStack & st, myStack & st2)
        {
            if(st.size() != st2.size())
            {
                return false;
            }
            while (!st.empty())
            {
                if(st.top() != st2.top())
                {
                    return false;
                }
            st.pop();
            st2.pop();
            }
            return true;
        }
int main()
{
    myStack st, st2;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    // 2nd input
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin>>y;
        st2.push(y);
    }
    if (checkValAndSize(st, st2))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}