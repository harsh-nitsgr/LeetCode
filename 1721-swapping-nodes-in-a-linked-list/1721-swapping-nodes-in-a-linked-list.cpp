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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int size=0;
        ListNode* node=head;
        while(node){
            size++;
            node=node->next;
        }
        node=head;
        ListNode* node1=head, *node2=head;
        
        int i=1;
        while(node){
            if(i==k)node1=node;
            if(i==size-k+1)node2=node;
            i++;
            node=node->next;
        }
        swap(node1->val,node2->val);
        return head;
    }
};