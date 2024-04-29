//{Traversing in reverse ordddder}
//give the head of a singly linked list and print  the reverse list
//1->2->3->4->5
//54321 print the value like this
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
 void reversePrint(Node* head){
    //base case
    if(head==NULL){
        return;
    }
    //recursive case
    reversePrint(head->next);
    cout<<head->val<<" ";
 }
 int main() {
    LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
    ll.display();
   reversePrint(ll.head);
    ll.display();
    return 0;
    }