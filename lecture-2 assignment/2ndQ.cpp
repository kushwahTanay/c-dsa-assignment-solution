You are given two linked lists: list1 and list2 of sizes n and m respectively.
Remove list1 's nodes from the ath node to the bth node, and put list2 in their place.
[Leetcode 1669]

  ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode* p = list1;
         ListNode* q = list1;
         ListNode* r = list2;
         while(r->next!=NULL){
            r = r->next;
         }
         a-=1;
         while(a>0){
            p = p->next;
            a--;
         }
         b+=1;
         while(b>0){
            q = q->next;
            b--;
         }
         p->next = list2;
         r->next = q;
         return list1;
    }