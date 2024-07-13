/*
Qs. Given the head of a singly linked list, return true if it is a Palindrome or false
otherwise.

Input: head = [1,2,2,1]  Linked List : 1->2->2->1
Output: true

Input: head = [1,2] Linked List : 1->2
Output: false
*/

#include<iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* nextPtr;

    Node(int value) {
        this->data = value;
        this->nextPtr = NULL;
    }
};

class List {
public: 
    Node* head;

    List() {
        this->head = NULL;
    }

    void reverse() {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL) {
            Node* next = curr->nextPtr;
            curr->nextPtr = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        return;
    }

    void push_back(int value) {
        Node* newNode = new Node(value);

        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->nextPtr != NULL) {
            temp = temp->nextPtr;
        }

        temp->nextPtr = newNode;

        return;
    }

    void print() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->data<<" "<<"->";
            temp = temp->nextPtr;
        }
        cout<<"NULL\n";
        return;
    }

};


bool isPalindrome(List ll) {
    if(ll.head == NULL){
        return false;
    }

    Node* temp1 = ll.head;
    cout<<temp1->nextPtr->data<<" ";

    ll.reverse();

    Node* temp2 = ll.head;
    cout<<temp1->nextPtr->data<<" /n";

    while(temp1 != NULL || temp2 != NULL) {
        if(temp1->data != temp2->data) {
            return false;
        }
        cout<<temp1->data<<"=="<<temp2->data<<endl;
        temp1 = temp1->nextPtr;
        temp2 = temp2->nextPtr;
    }

    return true;
}

int main() {
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(1);

    ll.print();
    ll.reverse();
    ll.print();

    cout<<"Is palindrome: "<<isPalindrome(ll)<<"\n";
    return 0;
}