#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string val;
    Node* prev;
    Node* next;

    Node(string val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void visit_address(Node*& current, string address) {
    Node* tmp = current;
    while (tmp != NULL) {
        if (tmp->val == address) {
            cout << tmp->val << endl;
            current = tmp;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void move_next(Node*& current) {
    if (current != NULL && current->next != NULL) {
        current = current->next;
        cout << current->val << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

void move_prev(Node*& current) {
    if (current != NULL && current->prev != NULL) {
        current = current->prev;
        cout << current->val << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    string s;

    while (cin >> s) {
        if (s == "end")
            break;
        Node* newNode = new Node(s);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int Q;
    cin >> Q;
    cin.ignore();

    while (Q--) {
        string command;
        getline(cin, command);
        if (command.substr(0, 6) == "visit " && command.length() > 6) {
            string address = command.substr(6);
            visit_address(head, address);
        } else if (command == "next") {
            move_next(head);
        } else if (command == "prev") {
            move_prev(head);
        }
    }

    return 0;
}
