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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    // cout << endl << "Inserted at tail" << endl << endl;
}

// void printing_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl << endl;
// }

bool isSorted(Node *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
            return false;
        tmp = tmp->next;
    }

    return true;
}

int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    // printing_linked_list(head);

    if (isSorted(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}