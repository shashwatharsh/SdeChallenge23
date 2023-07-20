// given two linked list now you have to create a new list where you have to sum the two list elements digits and save in another list 

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansl = new ListNode();
        ListNode* temp = ansl;
        int carry =0;
        while(l1 != NULL || l2 != NULL ||carry){
            int sum = 0;
            if( l1!= NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!= NULL){
                sum+= l2-> val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* newnode = new ListNode(sum%10);
            temp->next = newnode;
            temp = temp -> next;
        }
        return ansl->next;
    }