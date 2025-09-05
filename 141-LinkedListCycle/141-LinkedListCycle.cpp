// Last updated: 9/5/2025, 9:00:15 PM
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
        
    }
};