// Given the head of a linked list , remove the kth node from the end of the list and return it's head
// 1->2->3->4->5->6->null
//  if k=3 then we have to delete the last thied element of the linked list that is 4, here we have to delete 4 from the linked list
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != 0)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
void removekthNodeFromEnd(Node *&head, int k)
{
    Node *ptr1 = head;
    Node *ptr2 = head;
    // move ptr2 by k steps ahead
    int count = k;
    while (count--)
    {
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){//k is equal to the length of the linked list
    //we havre to delte head of the node
    Node* temp = head;
    head = head->next;
    free(temp);
    return;

    }
    // when ptr2 is at null(end of the element )then ptr1 will be at the node of the kth elemnt which we have to deleted
    while (ptr2 != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    // now ptr2 is at the end of the element last element not pointing to the null and the ptr1 is at the before the kth node which we have to delete. we are doing htis step because for deletion we direct linked this element to the next of the kth node then after kth node will be free that means it is deletd now
//node to be deleted is ptr1->next
Node* temp = ptr1->next;
ptr1->next = ptr1->next->next;
free(temp);
}
int main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    removekthNodeFromEnd(ll.head,3);
    ll.display();
    return 0;
}