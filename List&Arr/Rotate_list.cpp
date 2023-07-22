ListNode* rotateRight(ListNode* head, int k) {
        /*
        if(head == NULL||head->next == NULL) return head;
        ListNode* dum = head;
        int len = 0;

        while(dum){
            len++;
            dum = dum->next;
        }
        
        for(int i=0;i<k%len;i++) {
            ListNode* temp = head;
            while(temp->next->next != NULL) temp = temp->next;
            ListNode* end = temp->next;
            temp->next = NULL;
            end->next = head;
            head = end;
        }
        return head;
        */
        if(head == NULL || head->next == NULL) return head;
        ListNode* dum = head;
        int len = 1;

        while(dum->next){
            len++;
            dum = dum->next;
        }

        dum->next = head;
        k = k%len;
        int end = len - k;
        while(end--) dum= dum->next;
        head = dum->next;
        dum->next  = NULL;
        return head;
        
    }