/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
class Stack
{
    //Write your code here

public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    Stack()
    {
        
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz == 0;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
        sz++;
    }

    void pop()
    {
        if (isEmpty())
        {
            return;
        }
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int getTop()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};