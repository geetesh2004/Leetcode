// Last updated: 9/5/2025, 9:00:05 PM
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next; 
        delete temp;
        

       
        }
        
};
