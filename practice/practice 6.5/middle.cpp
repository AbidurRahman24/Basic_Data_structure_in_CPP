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
void insert_at_tail(Node * &head, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head=newNode;
        return;
    }
    Node * tmp = head;
    while (tmp->next !=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void printMiddleElements(Node * head)
{
    // cout<<endl<<endl<<"Your Linked List: "<<endl<<endl;
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
        // Even number of nodes, print two middle elements
        cout << current->val << " " << current->next->val <<endl;
    }
    else
    {
        // Odd number of nodes, print one middle element
       cout << current->val <<endl;
    }
    cout<<endl;
}
int main()
{
    int val;
    Node * head = NULL;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    
    // printing_linked_list(head);
    printMiddleElements(head);
    return 0;
}