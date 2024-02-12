#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail(Node *&head, Node* &tail, int val)
{
    Node * newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=  newNode;
    newNode->prev = tail;
    tail = tail->next;
}
bool print_sameValue(Node * head,Node * head2)
{
    Node * tmp = head;
    Node * tmp2 = head2;
    if(tmp == NULL && tmp2 == NULL)
    {
        return true;
    }
    while (tmp != NULL && tmp2 != NULL)
    {
        if(tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return tmp == NULL && tmp2 == NULL;
    // cout << endl
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)break;
        insert_tail(head,tail,val);
    }
    // print_normal(head);
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val2;
    while (true)
    {
        cin>>val2;
        if(val2 == -1)break;
        insert_tail(head2,tail2,val2);
    }
    if(print_sameValue(head,head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}