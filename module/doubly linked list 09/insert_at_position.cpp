#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // Set the next of the new node
    tmp->next = newNode;           // Set the next of the previous node
    newNode->next->prev = newNode; // Set the previous of the next node
    newNode->prev = tmp;           // Set the previous of the new node
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;     // Set the next of the new node
    head->prev = newNode;     // Set the previous of the current head
    head = newNode;           // Update the head to the new node
}
void insert_tail(Node * &head, Node * &tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;     // Set the next of the current tail
    newNode->prev = tail;     // Set the previous of the new node
    tail = tail->next;        // Update the tail to the new node
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos, val;
    cin >> pos >> val;
    if(pos ==0)
    {
        insert_head(head, tail, val);
    }
    else if(pos ==size(head))
    {
        insert_tail(head,tail, val);
    }
    else if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    // function called
    print_normal(head);
    print_reverse(tail);
    return 0;
}