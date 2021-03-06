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
    bool isPalindrome(ListNode* head) {
        string num="";
        
        while(head){
            num.push_back(head->val);
            head=head->next;
        }
        for(int i=0,j=num.size()-1;i<num.size()/2;i++,j--){
            if(num[i]!=num[j])return 0;
        }
        return 1;
    }
};