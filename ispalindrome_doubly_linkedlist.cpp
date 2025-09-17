#include <iostream>
using namespace std;

struct node{
    int info;
    node* next;
    node* prev;
};
void append(node*& head,node*& tail,int value){
    node * newNode = new node {value,nullptr,nullptr};
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

}
bool ispalindrome(node* head, node* tail) {
    while ( head != tail && tail->next != head) {
        if (head->info != tail->info)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

   

int main() {
    node* head = nullptr;
    node* tail = nullptr;

    // Sample input
    append(head, tail, 1);
    append(head, tail, 3);
    append(head, tail, 3);
    append(head, tail, 2);
    append(head, tail, 1);



    if (ispalindrome(head, tail)) {
        cout << "The list is a palindrome." << endl;
    } else {
        cout << "The list is not a palindrome." << endl;
    }

    return 0;
}