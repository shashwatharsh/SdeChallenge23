class Solution {
private: 
ListNode* reverse(ListNode * ptr){
    ListNode* next = NULL;
    ListNode* prev = NULL;
    while(ptr){
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    return prev;
}
public:
    bool isPalindrome(ListNode* head) {
        /*
        stack<int> st;
        ListNode* temp = head;
        while(temp){
            st.push(temp -> val);
            temp = temp->next;
        }
        temp = head;
        while(st.size()){
            if(st.top() != temp->val)
                return 0;
            st.pop();
            temp = temp -> next;
        }
        return 1;
        */

            if(head==NULL||head->next==NULL) return true;

        ListNode* slow = head, *fast = head;
        while(fast-> next !=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* dum = head;

        while(slow != NULL && dum){
            if(dum->val != slow->val)
                return false;
            

            dum = dum->next;
            slow = slow->next;

        }
        return true;
    }
};