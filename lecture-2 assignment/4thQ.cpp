// Given the head of a linked list and an integer val , remove all the nodes of the linked list that
// has Node.val == val , and return the new head.

 ListNode* removeElements(ListNode* head, int val) {
       //iterative approach
      if(!head) return head;
      ListNode *prev = nullptr, *curr = head;
      while(curr){
        if(curr->val == val){
            if(!prev) head = curr->next;
            else prev->next = curr->next;
        } else
              prev = curr;
              curr = curr->next;
      }
      return head;
    }