#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
     LinkedListNode<int> *newHead = NULL;
        while (head != NULL) {
            LinkedListNode<int> *next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
    */


        if (head == NULL||head->next==NULL)
            return head;

        LinkedListNode<int>* nnode = reverseLinkedList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
}