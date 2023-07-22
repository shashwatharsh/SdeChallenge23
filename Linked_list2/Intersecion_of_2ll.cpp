// 160. Intersection of Two Linked Lists

 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA,*ptrB = headB;

        
        while(headB){
            ListNode* temp = headA;
            while(temp){
                if(temp == headB){
                    return temp;
                }
                temp = temp->next;
            }
            headB = headB -> next;
        }
        return NULL;
    }

// Using Set data structure , set is unique 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
    unordered_set<ListNode*> mp;
    while(headA){
        mp.insert(headA);
        headA= headA->next;
    }
    while(headB){
        if(mp.find(headB) != mp.end()){
            return headB;
        }
        headB = headB->next;
    }
    return NULL;
}


// OPtimized

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
    ListNode *d1 = headA, *d2 = headB;
    
    while(d1 != d2){
        d1 = d1 == NULL? headB: d1->next;
        d2 = d2 == NULL? headA: d2->next;
    }
    return d1;
}