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
        // int size=0;
        // ListNode* node=head;
        // while(node){
        //     size++;
        //     node=node->next;
        // }
        // for(int i=0;i<size/2;i++)head=head->next;
        // return head;
        ListNode* fast=head,*slow=head;
        while(fast!=NULL and fast->next !=NULL) {
            fast=fast->next->next,slow=slow->next;
        }
        return slow;
    }
};