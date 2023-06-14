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
void insert_at_tail(Node *&head, Node *&tail, int val)
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
int nodeSize (Node * head)
{
    Node * tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}
// int nodeSize(Node * head)
// {
//     // cout<<endl<<endl<<"Your Linked List: "<<endl<<endl;
//     Node * tmp = head;
//     int count =0;
//     while (tmp != NULL)
//     {
//         count++;
//         tmp = tmp->next;
//     }
//     cout<<endl;
//     cout<<count<<" ";
// }
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    // print_linekd_list(head);
    cout<<endl;
    int val2;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail(head2, tail2, val2);
    }
    if(nodeSize(head) == nodeSize(head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}