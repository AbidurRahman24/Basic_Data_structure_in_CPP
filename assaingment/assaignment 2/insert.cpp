#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head,Node * tail)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tail != NULL)
    {
        cout << "Head: " << head->val << "Tail: " << tail->val << endl;
    }
        tmp = tmp->next;
    }
//     if (tail != NULL)
//     {
//         cout << "Head: " << head->val << "Tail: " << tail->val << endl;
//     }
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
        int op;
        cin >> op;
        cin >> val;
        if (op ==0)
        {
            insert_at_head(head, val);
        }
        
        else if(op ==1)
        {
            insert_tail(head, tail, val);
        }
    print_linekd_list(head,tail);
    return 0;
}