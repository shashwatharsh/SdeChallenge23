// If list has cycle the return true else fasle

bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int> mp;
        while(head){
            mp[head]++;
            if(mp[head] >= 2){
                return true;
            }
            head= head->next;
        }
        return false;
    }

bool hasCycle(ListNode *head){
        if(head == NULL) return false;
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast ->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        return false;
    }