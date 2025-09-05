// Last updated: 9/5/2025, 8:59:55 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int middle = (count/2)+1;
        temp=head;
        while(temp!=NULL){
            middle=middle-1;
            if(middle==0){
                break;
            }
            temp=temp->next;
        }
        return temp;
}
};