class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     
        if(head == NULL) return head; // if head is NULL return 
        ListNode* prev = NULL; // set a prev pointer that will point to a NULL node before head
        
        while(head) // while head exists same as head != NULL
        {
            ListNode* temp = head->next; // temp store the node of the head->next pointer
            head->next = prev; // head->next will point to the prev that is standing before head
            prev = head; // prev will move one step to point to head
            head = temp; // head will move one step to temp which was pointing to head->next
        }
        
        return prev; // prev now is the head
    }
};