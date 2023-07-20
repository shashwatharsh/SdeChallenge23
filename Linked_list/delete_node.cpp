// 237. Delete Node in a Linked List
// https://leetcode.com/problems/delete-node-in-a-linked-list/description/


 void deleteNode(ListNode* node) {
        // ListNode* cur = node;
        // while(cur){
        //     if(cur->next != NULL){
        //     cur->val = cur->next->val;
        //     if(cur->next->next == NULL){
        //         cur ->next = NULL;
        //     }
        //     cur = cur->next;
        //     }
        // }

        
         node->val = node->next->val;
    node->next = node->next->next;

    }
    