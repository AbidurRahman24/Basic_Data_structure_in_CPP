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
void print_linked_list(Node *head)
{
    
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void friquency(Node*head,int*frq)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        frq[tmp->val]++;
        tmp=tmp->next;
    }
}
int main()
{
    int val;
    int frq[100]={0};
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
    friquency(head,frq);
    for(int i=0;i<100;i++)
    {
        if(frq[i]>1)
        {
            cout<<"YES";
            break;
        }
        else if(i==99)
        {
            cout<<"NO";
        }
    }
    return 0;
}