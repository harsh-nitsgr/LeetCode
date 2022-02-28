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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==nullptr or head->next==nullptr)return head;  
        int size=1;
        ListNode* tail=head;
        while(tail->next) size++,tail=tail->next;
        
        k%=size;
        if(k==0)return head;
        ListNode* new_tail=head;
        
        //by observation
        for(int i=0;i<size-k-1;i++) new_tail=new_tail->next;
        ListNode* new_head=new_tail->next;
        
        new_tail->next=NULL;
        tail->next=head;
        
        return new_head;        
    }
};