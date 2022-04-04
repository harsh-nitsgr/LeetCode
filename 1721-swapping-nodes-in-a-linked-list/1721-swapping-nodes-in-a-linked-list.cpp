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

        ListNode* node1=head,*node2=head,*current=head;
        
        int i=1;
        while(node1->next){
            if(i==k){
                current=node1;
                node2=head;
            }
            i++;
            node1=node1->next;
            node2=node2->next;
        }
        swap(current->val,node2->val);
        return head;
    }
};