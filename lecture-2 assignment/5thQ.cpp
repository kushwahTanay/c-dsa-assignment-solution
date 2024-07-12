Find the length of loop in Cycle of Linked List.

int findLen(struct Node *slow , struct Node*fast){
    int count = 1; fast = fast->next;
    while(fast != slow){
        count++;
        fast = fast->next;
    }
    return count;
}
int countNodesinLoop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return findLen(slow,fast);
    }
    return 0;
}