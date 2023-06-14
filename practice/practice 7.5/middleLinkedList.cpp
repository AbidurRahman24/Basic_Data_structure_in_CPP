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
void insert_at_tail(Node * &head,Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void printMiddleElements(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
    }
    Node *current = head;
     Node *runner = head;
    while (runner != NULL && runner->next != NULL)
    {
        current = current->next;
        runner = runner->next->next;
    }
    cout << "Middle element(s): ";
    if (runner == NULL)
    {
        cout << current->val << " " << current->next->val <<endl;
    }
    else
    {
       cout << current->val <<endl;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail, val);
    }
    printMiddleElements(head);
    return 0;
}