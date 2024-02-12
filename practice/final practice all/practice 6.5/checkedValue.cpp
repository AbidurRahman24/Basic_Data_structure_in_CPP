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
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     Node *head = NULL;
    //     Node *tail = NULL;
    //     int pos, v;
    //     cin >> pos >> v;
    //     if (pos == 0)
    //     {
    //         insert_at_head(head, v);
    //     }
    //     else
    //     {
    //         insert_tail(head, tail, v);
    //     }
    //     print_linked_list(head,tail);
    // }
    int val;
    Node * head =  NULL;
    Node *tail = NULL;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_linekd_list(head);
    return 0;
}