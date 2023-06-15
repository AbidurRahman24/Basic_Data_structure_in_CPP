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
void findMid(Node * &head)
{
    int size = nodeSize(head);
    int mid = (size +1) /2;
    Node * tmp = head;
    for (int i = 0; i < mid-1; i++)
    {
        tmp= tmp->next;
    }
    if(size %2==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else
    {
        cout<<tmp->val<<endl;
    }
    
}
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
    findMid(head);
    return 0;
}