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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
int size(Node * head)
{
    int sz = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        tmp = tmp->next;
        sz++;
    }
    return sz;
}
void findMId(Node * &head)
{
    int sz = size(head);
    int mid = (sz+1)/2;
    Node * tmp = head;
    for (int i = 0; i < mid-1; i++)
    {
        tmp = tmp->next;
    }
    if(sz %2==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else
    {
        cout<<tmp->val<<endl;
    }
}
void print_linked_list(Node *head)
{
    
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    int val;
    Node * head =  NULL;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    findMId(head);
    // cout<<mid<<endl;
    
    return 0;
}