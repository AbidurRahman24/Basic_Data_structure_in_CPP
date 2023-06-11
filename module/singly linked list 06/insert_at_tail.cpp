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
void insert_at_tail(Node * &head, int v) // linked list a head takbe and value
{
    // node create korte hobe
    Node *newNode = new Node(v);

    // head jodi null take
    if (head == NULL)
    {
        head = newNode; // null akon insert hoye jabe
        return;
    }

    // tail insert ar jonno
    Node *tmp = head;
    // amra amok ak jaygay jabo jekane next a null ahce
    while (tmp->next != NULL)
    {
        tmp = tmp->next; // just samne agiye jaw
    }
    // tmp akon last node a
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " "; // value print
        tmp = tmp->next;         //
    }
    cout << endl;
}
int main()
{
    Node *head = NULL; // 1. head value null takbe
    while (true){ //infinit loop

    // option create korte hobe;
    cout << "Option 1: insert at tail" << endl;
    cout << "Option 2: Print Linked List:" << endl;
    cout << "Option 3: Terminate" << endl;
    // user ar kac teke input nite hobe
    int op;
    cin >> op;
    if (op == 1)
    {
        cout << "Please Enter Value: ";
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    else if (op == 2)
    {
        print_linked_list(head);
    }
    else if (op == 3)
    {
        break;
    }
    }
    return 0;
}