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
    ListNode *detectCycle(ListNode *head) {
        //using hashmap
        // unordered_set<ListNode*>set;
        // while(head){
        //     set.insert(head);
        //     if(set.find(head->next)!=set.end())return head->next;
        //     head=head->next;
        // }
        // return nullptr;
        
        //using two pointers
        ListNode* node=head;
        while(head){
            if(head->val!=100001)head->val=100001;
            else return head;
            head=head->next;
        }
        return NULL;
        
    }
};