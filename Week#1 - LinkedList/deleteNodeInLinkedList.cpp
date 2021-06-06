class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val  = node->next->val; // assign the value of the current node to equal the value of next node
        node->next = node->next->next; // point the current node next to the next next node
    
    }
};