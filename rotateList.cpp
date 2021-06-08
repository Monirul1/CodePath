class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next || k == 0) return head;
        
        int size = 1;
        
        ListNode* curr = head;
        
        while(curr->next != NULL)
        {
            size++;
            curr = curr->next;
        }
        
        curr->next = head;
        
        k %= size;
        // cout << size;
        while(--size >= k)
        {
            curr = curr->next;
        }
        
        ListNode* temp = curr->next;
        curr->next = NULL;
        
        return temp;
    }
};