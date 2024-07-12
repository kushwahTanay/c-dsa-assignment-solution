// You are given the head of a linked list. Delete the middle node, and return the head of the
// modified linked list. [Leetcode 2095]

  ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
       ListNode* slow = head;
       ListNode* fast = head;
       ListNode* prev = nullptr;
       while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
       }
       prev->next = slow->next;
       return head;
    }