// REmove nth node form last of linked list

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int cnt = 0;
        while(cur ){
            cnt++;
            cur = cur->next;
        }
        cur = head;
        int ele = cnt - n;
        ListNode* prev ;
        for(int i =0;i<ele;i++){
            prev = cur;
            cur = cur->next;
        }
        if (ele == 0) {
            head = head->next;
        } else {
            prev->next = cur->next;
        }
            delete cur;
        return head;
    }