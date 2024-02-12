#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node* head) {
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insert_at_position(Node*& head, int pos, int val) {
    if (pos == 0) {
        insert_head(head, head, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    if (tmp->next != NULL) {
        tmp->next->prev = newNode;
    }
    newNode->prev = tmp;
    tmp->next = newNode;
}

void print_linked_list(Node* head, Node* tail) {
    cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    cout << "R -> ";
    tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X < 0 || X > size(head)) {
            cout << "Invalid" << endl;
        }
        else if (X == 0) {
            insert_head(head, tail, V);
            print_linked_list(head, tail);
        }
        else if (X == size(head)) {
            insert_tail(head, tail, V);
            print_linked_list(head, tail);
        }
        else {
            insert_at_position(head, X, V);
            print_linked_list(head, tail);
        }
    }

    return 0;
}
