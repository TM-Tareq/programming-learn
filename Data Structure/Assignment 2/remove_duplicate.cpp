#include<bits/stdc++.h>
using namespace std;

class Node {
        public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void same_check(Node* head) {
    if (head == NULL) return;

    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i; j->next != NULL; ) {
            if (i->val == j->next->val) {
                Node* newnode = j->next;
                j->next = j->next->next;
                delete newnode;
            } else {
                j = j->next;
            }
        }
    }
}



void print_linked_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    same_check(head);
    print_linked_list(head);
    
    return 0;
}