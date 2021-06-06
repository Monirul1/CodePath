class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;   
            }
            
            sum += carry;
            carry = sum/10;
            
            ListNode* t = new ListNode(sum%10);
            temp->next = t;
            temp = temp->next;
        }
        
        return dummy->next;
        
        
    }
};