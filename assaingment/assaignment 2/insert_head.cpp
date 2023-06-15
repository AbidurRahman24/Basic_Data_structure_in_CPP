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
//Insert at head
void insert_head(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node* head, Node* tail) {
    Node * tmp=head;
    Node * tmp2=tail;
    cout << tmp->val<<" "<<tmp2->val<<endl;
}
int main()
{
    int t;
    cin>>t;
    Node* head = NULL;
    Node* tail = NULL;
    while (t--)
    {
        int pos, val;
        cin>>pos>>val;
        if(pos ==0)
        {
            insert_head(head,tail, val);
        }
        else if(pos ==1)
        {
            insert_tail(head, tail, val);
        }
        print_linked_list(head, tail);
    }
    
    return 0;
}