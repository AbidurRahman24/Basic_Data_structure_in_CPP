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
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_node(Node *head, int val)
{
    Node *tmp = head;
    for (int i = 1; i <= val - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next; // 30
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void delete_nodes(Node *&head, int val)
{
    while (head != NULL && head->val == val)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->next->val == val)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linekd_list(head);
    int val;
    cin >> val;
    // if (pos >= size(head))
    // {
    //     cout << "Invalid" << endl;
    // }
    // if (pos == 0)
    // {
    //     delete_head(head);
    // }
    
    delete_node(head, val);
    print_linekd_list(head);

    return 0;
}