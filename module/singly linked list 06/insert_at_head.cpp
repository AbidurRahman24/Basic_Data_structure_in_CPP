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
        cout << endl
             << "Inserted at head" << endl
             << endl;
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
void insert_at_position(Node * head, int pos, int val)
{
    Node * newNode = new Node(val); //new node add korte hobe
    Node * tmp = head; //tmp node create holo
    for (int i = 1; i < pos-1; i++) 
    {
        tmp = tmp->next; //loop colbe position anosare
    }
    newNode->next = tmp->next; //noton node ar sate porer valur connected korte hobe; 
    tmp->next = newNode; //ager address gorer sate newNode connecte korbo;
    cout<<endl<<"inserted at position"<<endl<<endl;
    
}
void insert_at_head(Node * &head, int val)
{
    Node * newNode = new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"inserted at head"<<endl<<endl;
}
int main()
{
    Node *head = NULL; // 1. head value null takbe
    while (true){ //infinit loop

    // option create korte hobe;
    cout << "Option 1: insert at tail" << endl;
    cout << "Option 2: Print Linked List:" << endl;
    cout << "Option 3: Insert any position:" << endl;
    cout << "Option 4: Insert at first position:" << endl;
    cout << "Option 5: Terminate" << endl;
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
    else if(op ==3)
    {
        int pos,val;
        cout<<"Ender Position: ";
        cin>>pos;
        cout<<"Ender val: ";
        cin>>val;
        if(pos ==0)
        {
            insert_at_head(head,val);
        }
        else
        {
            insert_at_position(head,pos,val);

        }
    }
    else if (op == 4)
    {
        int val;
        cout<<"Enter value: ";
        cin>>val;
        insert_at_head(head,val);
    }
    else if (op == 5)
    {
        break;
    }
    }
    return 0;
}