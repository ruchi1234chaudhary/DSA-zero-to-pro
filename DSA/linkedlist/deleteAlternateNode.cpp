// // Given the head of a linked list delete e very alternate element of the list starting from the second element
// // 1->2->3->4->5
// // After Deletion
// // 1->3->5

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }

    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next; //this is the node to be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
         curr_node = curr_node->next;

    }

}


int main() {
    LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
    ll.display();
    deleteAlternateNodes(ll.head);
    ll.display();}
   

