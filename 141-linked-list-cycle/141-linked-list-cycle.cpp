/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL)return 0;
        ListNode* fast=head->next,*slow=head;
        
        while(fast !=nullptr and fast->next != nullptr){
            if(fast == slow)return 1;
            fast=fast->next->next;
            slow=slow->next;
        }
        return 0;
    }
};