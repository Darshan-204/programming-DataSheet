#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to sort the linked list
Node* sortList(Node* head) {
    if (!head || !head->next) return head;

    // Create dummy nodes for 0, 1, and 2 lists
    Node* zeroD = new Node(0);
    Node* oneD = new Node(0);
    Node* twoD = new Node(0);

    // Current tails of 0, 1, and 2 lists
    Node* zero = zeroD;
    Node* one = oneD;
    Node* two = twoD;

    Node* curr = head;

    // Partition list into 3 lists
    while (curr) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        } else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        } else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    // Connect the 3 lists
    zero->next = (oneD->next) ? oneD->next : twoD->next;
    one->next = twoD->next;
    two->next = nullptr;

    // New head
    Node* newHead = zeroD->next;

    // Delete dummy nodes
    delete zeroD;
    delete oneD;
    delete twoD;

    return newHead;
}

// Utility to print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
