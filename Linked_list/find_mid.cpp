#include<iostream>
using namespace std;

ListNode * find_mid_elem(ListNode * head){
    // better
     // Tortoise-Hare-Approach
        ListNode *slow = head, *fast = head;
        while( fast && fast ->next){
            slow = slow->next;
            fast = fast ->next ->next;
        }
        return slow;
}


// brute approacch
ListNode * find_mid_elem1(ListNode * head){

     int n =0;
        ListNode * tem = head;
        // count nodes 
        while(tem!= NULL){
            n++;
            tem = tem->next;
        }
        tem = head;
        // traverse till the mid of the list and return middle 
        for(int i =0;i<n/2;i++){
            tem = tem->next;
        }
        return tem;

}