question-> You are given the head of a linked list, and an integer k .
Return the head of the linked list after swapping the values of the kth node from the
beginning and the kth node from the end (the list is 1-indexed). [Leetcode 1721]

// answer

 ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
         int len = 0;
         while(temp){
            len++;
            temp = temp->next;
         }
         int start = k;
         int end = len-k+1;

         ListNode* startNode, *endNode;
         ListNode* curr = head;
         int index = 1;
         while(curr){
            if(start==index) startNode = curr;
            if(end==index) endNode = curr;
            curr = curr->next;
            index++;
         }
         swap(startNode->val,endNode->val);
         return head;

    }