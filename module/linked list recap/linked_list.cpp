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
void printing(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node * head = new Node(5);
    Node * a = new Node(15);
    Node * b = new Node(52);
    Node * c = new Node(53);

    head->next=a;
    a->next=b;
    b->next=c;
    printing(head);
    return 0;
}