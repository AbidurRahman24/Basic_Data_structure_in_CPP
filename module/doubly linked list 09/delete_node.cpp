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
void delete_at_position(Node *head, int pos)
{
    Node *tmp = head; // Create a temporary pointer and set it to the head of the list.
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next; // Traverse the list until the desired position is reached.
    }
    Node *deleteNode = tmp->next; // Create a pointer to the node to be deleted.
    tmp->next = tmp->next->next; // Update the "next" pointer of the previous node to skip the node being deleted.
    tmp->next->prev = tmp; // Update the "prev" pointer of the next node to maintain the doubly linked structure.
    delete deleteNode; // Delete the node from memory to free up resources.
}
void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head; // Create a pointer to the head node to be deleted.
    head = head->next; // Update the head pointer to the next node.
    if (head == NULL)
    {
        tail = NULL; // If the list becomes empty after deletion, update the tail pointer as well.
        return;
    }
    head->prev = NULL; // Update the prev pointer of the new head to NULL since it is now the first node.
}

void delete_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail; // Create a pointer to the tail node to be deleted.
    tail = tail->prev; // Update the tail pointer to the previous node.
    delete deleteNode; // Delete the node from memory.
    if (tail == NULL)
    {
        head = NULL; // If the list becomes empty after deletion, update the head pointer as well.
        return;
    }
    tail->next = NULL; // Update the next pointer of the new tail to NULL since it is now the last node.
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
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }
    // function called
    print_normal(head);
    print_reverse(tail);
    return 0;
}