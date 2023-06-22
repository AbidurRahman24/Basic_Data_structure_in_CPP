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

// void duplicateRemove(Node *&head)
// {
//     if (head == NULL)
//         return;
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         if (tmp->val == tmp->next->val)
//         {
//             Node *deleteNode = tmp->next;
//             tmp->next = tmp->next->next;
//             delete deleteNode;
//         }
//         if (tmp->next == NULL)
//             break;
//         else if (tmp->val != tmp->next->val)
//         {
//             tmp = tmp->next;
//         }
//     }
// }
int main()
{
    list<int> myList;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}