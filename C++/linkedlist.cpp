#include<bits/stdc++.h>
using namespace std;

// Define the structure of a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to print the linked list
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Function to delete the middle element of the linked list
void deleteMiddle(Node** head_ref) {
    if (*head_ref == NULL || (*head_ref)->next == NULL) {
        return;
    }

    Node* slow = *head_ref;
    Node* fast = *head_ref;

    // find the middle of the linked list
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // delete the middle node
    if (fast != NULL) {
        cout << "Deleted " << slow->data << " ";
        Node* temp = slow->next;
        slow->next = temp->next;
        free(temp);
    } else {
        // delete both middle nodes
        cout << "Deleted " << slow->data << " ";
        Node* temp = slow->next;
        slow->next = temp->next;
        free(temp);
    }
}

// Function to insert a new node at the beginning of the linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    Node* head = NULL;

    // Create the linked list
    push(&head, 12);
    push(&head, 9);
    push(&head, 5);
    push(&head, 7);
    push(&head, 4);
    push(&head, 8);
    push(&head, 6);

    printList(head);

    // Delete the middle element of the linked list
    deleteMiddle(&head);

    printList(head);

    // Delete the middle element of the linked list
    deleteMiddle(&head);

    printList(head);

    // Delete the middle element of the linked list
    deleteMiddle(&head);

    printList(head);

    return 0;
}