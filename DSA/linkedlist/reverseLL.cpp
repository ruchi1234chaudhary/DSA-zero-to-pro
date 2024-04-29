//reverse the linked list like the way
//1->2->3->4->5
//5->4->3->2->1
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
Node* reverseLL(Node* &head){
    Node* prevptr= NULL;
    Node* currptr = head;
    //currptr->next = prevptr;
    //move all 3 ptrs by one step ahead'
    while(currptr!=NULL){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    //when this loop ends prevptr pointing to my last node which is new head
    Node* new_head = prevptr;
    return new_head;
}
Node* reverseLLRecursion(Node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    //recursive case
    Node* new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;// head is now pointing to last node in reversed ll
    return new_head;
}
 
 int main() {
    LinkedList ll;
   ll.insertAtTail(1);
   ll.insertAtTail(2);
   ll.insertAtTail(3);
   ll.insertAtTail(4);
   ll.insertAtTail(5);
    ll.display();
    ll.head = reverseLLRecursion(ll.head);
    ll.display();
  
    return 0;
    }