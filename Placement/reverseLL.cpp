#include<iostream>
using namespace std;

class ListNode{
public:
     int val;
     ListNode* next;
     ListNode(int val) : val(val), next(nullptr) {}
};

ListNode* reverseList(ListNode* head){
    ListNode *nextNode, *prevNode = NULL;
    while(head){
        nextNode=head->next;
        head->next = prevNode;
        prevNode = head;
        head = nextNode;
    }
    return prevNode;
}

void printList(ListNode* head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    cout << "Original List: ";
    printList(head);
    head = reverseList(head);
    cout << "ReverseList: ";
    printList(head);
    return 0;
}