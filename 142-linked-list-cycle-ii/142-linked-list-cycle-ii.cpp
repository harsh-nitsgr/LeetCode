/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         // using hashmap
//         unordered_set<ListNode*>set;
//         while(head){
//             set.insert(head);
//             if(set.find(head->next)!=set.end())return head->next;
//             head=head->next;
//         }
//         return nullptr;
 
        
//     }
// };

// two pointer mtd:

class Solution{
    public:
        ListNode*detectCycle(ListNode* head){
            ListNode* fast=head,*slow=head;
            while(fast and fast->next){
                fast=fast->next->next;
                slow=slow->next;
                if(fast==slow){
                    while(head != fast){
                        fast=fast->next;
                        head=head->next;
                    }
                    return head;
                }
            }
            return NULL;
        }
};