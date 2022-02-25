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
    void deleteNode(ListNode* node) {
        
        ListNode* toDelete;
        bool visited=0;
        while(node->next != NULL){
            if(!visited and node->next->next ==NULL)toDelete=node,visited=1;
            node->val=node->next->val;
            node=node->next; 
        }
        toDelete->next=nullptr;
    }
};