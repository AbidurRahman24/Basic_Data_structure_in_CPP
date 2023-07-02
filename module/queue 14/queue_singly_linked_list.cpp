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
class myQueue
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz=0;
        // 1 ST OPARATION
        void push (int val)
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
            tail=  tail->next;
        }
        // 2NO OPARATION
        void pop()
        {
            sz--;
            Node * deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL)
            {
                tail = NULL;
            }
        }
        // 3rd OPARATION
        int front()
        {
            return head->val;
        }
        // 4th OPARATION
        int size()
        {
            return sz;
        }
        // 5th OPARATION
        bool empty()
        {
            if(sz==0)
            {
                return true;
            }
            else
            {
                return false;
            }
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