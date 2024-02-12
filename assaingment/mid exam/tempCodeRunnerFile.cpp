#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void visit_address(Node *&head, string address)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == address)
        {
            cout << tmp->val << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void move_next(Node *&tmp)
{
    if (tmp != NULL && tmp->next != NULL)
    {
        tmp = tmp->next;
        cout << tmp->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void move_prev(Node *&tmp)
{
    if (tmp != NULL && tmp->prev != NULL)
    {
        tmp = tmp->prev;
        cout << tmp->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    list<string> addresses;

    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        insert_tail(head, tail, s);
    }

    int t;
    cin >> t;
    cin.ignore();

    Node *tmp = head;
    while (t--)
    {
        string command;
        getline(cin, command);

        if (command == "next")
        {
            move_next(tmp);
        }
        else if (command == "prev")
        {
            move_prev(tmp);
        }
        else
        {
            visit_address(head, command);
        }
    }

    return 0;
}
