#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }

};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    };
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
    }};
    int getLength(Node* head){
        Node* temp = head;
        int length =0;
        while(temp!= NULL){
            length++;
            temp= temp->next;

        }
        return length;
    }
Node* moveHeadByK(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr=ptr->next;

    }
    return ptr;
}




    Node* getIntersection(Node* head1,Node* head2){
        Node* ptr1 = head1;
        Node* ptr2 =  head2;
//Step1. calculate the length of both linked list by using above function
int l1 = getLength(head1);
int l2 = getLength(head2);
//step2. find the difference between the length of the both linked list and move longer to the linked list by kth term of step
if(l1>l2){
    int k= l1-l2;// l1 is longer
   ptr1 = moveHeadByK(head1,k);
}
else{
    int k = l2-l1;// l2 will be longer
   ptr1 = head1;
    ptr2 = moveHeadByK(head2,k);
}
//step3. Compare ptr and ptr2 
while(ptr1){
    if(ptr1==ptr2){
        return ptr1;
    }
    else{
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
}
return NULL;
    }

int main(){
LinkedList ll1;
ll1.insertAtTail(1);
ll1.insertAtTail(2);
ll1.insertAtTail(3);
ll1.insertAtTail(4);
ll1.insertAtTail(5);
ll1.display();
//1->2->3->4->5->null
LinkedList ll2;
ll2.insertAtTail(6);
ll2.insertAtTail(7);
ll2.head->next->next = ll1.head->next->next->next;
ll2.display();
//6->7->4->5->null
Node* intersection = getIntersection(ll1.head, ll2.head);
if(intersection){
    cout<<intersection->val<<endl;
}
else{
    cout<<"-1"<<endl;
}
    return 0;
}