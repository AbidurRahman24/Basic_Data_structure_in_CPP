//program to check duplicate value of linked list
#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
        int val;
        Node *next;
        
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }

};
void insert_at_tail(Node*&head,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}

void friquency(Node*head,int*frq)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        frq[tmp->val]++;
        tmp=tmp->next;
    }
}
// bool check_duplicate(Node *head)
// {
//     Node*tmp=head;
//     while(tmp->next!=NULL)
//     {
//         if(tmp->val==tmp->next->val)
//         {
//             return true;
//             break;
//         }
//         if(tmp->next==NULL)
//         {
//             return false;
//         }
//         tmp=tmp->next;
//     }
// }

int main()
{
    Node*head=NULL;
    int frq[100]={0};
    int n;
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        insert_at_tail(head,n);

    }
    friquency(head,frq);
    for(int i=0;i<100;i++)
    {
        if(frq[i]>1)
        {
            cout<<"YES";
            break;
        }
        else if(i==99)
        {
            cout<<"NO";
        }
    }
    // (check_duplicate(head)==true)?cout<<"YES":cout<<"NO";

    return 0;

}