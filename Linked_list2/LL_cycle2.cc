 
 
 ListNode *detectCycle(ListNode *head) {
        
        /* unordered_map<ListNode *,int> mp;
        while(head){
            mp[head]++;
            if(mp[head] >= 2){
                return head;
            }
            head= head->next;
        }
        return NULL;
        */

        //  if(head == NULL) return head;
        if(head == NULL || head -> next == NULL) return NULL;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* entry = head;

        while( fast -> next && fast -> next -> next){
            slow = slow -> next;
            fast = fast -> next ->next;
            if(slow == fast ){
                while(slow != entry){
                    slow = slow -> next;
                    entry = entry -> next;
                }
                return slow;
            } 
        }
        return NULL;
    }