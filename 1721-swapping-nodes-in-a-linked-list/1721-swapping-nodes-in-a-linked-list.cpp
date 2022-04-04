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

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        ListNode* node1=head,*node2=head,*current=head;
        
        //when node1 reaches to kth value from start we will set node2 to head now move both by this way distance between node1 and node2 will remain equal to k
        
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