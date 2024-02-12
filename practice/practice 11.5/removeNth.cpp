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
void delete_node(Node *head, int pos)
{
    
    Node *tmp = head;
     for (int i = 1; i <= pos - 1; i++)
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
    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_node(head, pos);
    }
    print_linekd_list(head);

    return 0;
}


// leetcode
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     int length(ListNode* head)
// {
//     ListNode* temp = head;
//     int count = 0;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//     int Length = length(head);
//     int nodeFromBeginning = Length - n + 1;
//     ListNode* prev = NULL;
//     ListNode* temp = head;
//     for (int i = 1; i < nodeFromBeginning; i++) {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (prev == NULL) {
//         head = head->next;
//         return head;
//     }
//     else {
//         prev->next = prev->next->next;
//         return head;
//     }
//     }
// };