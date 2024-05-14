//given the head of a linked list, reverse the nodes of the list k at a timr, and return the modified list.
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
Node* reverseKLL(Node* &head, int k){
    Node prevptr = NULL;
    Node* currptr = head;
    int counter =0;//fot counting first k nodes
    while(currptr!=NULL && counter<k){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;

    }
    if(currptr!=NULL){
   Node* new_node =  reverseKLL(currptr,k);//recursive call
   head->next= new_node;
}
return prevptr;}
int main() {
    LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
    ll.display();
    reverseKLL(ll.head,2);
    ll.display();
    }