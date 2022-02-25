class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &num:nums){
            pq.push(num);
        }
        int l=1;
        int currL=1;
        int t=pq.top();
        pq.pop();
        while(!pq.empty()){
            if(pq.top()-t ==1)currL++;
            else if(pq.top()-t !=0)currL=1;
            t=pq.top();
            if(currL>l)l=currL;
            pq.pop();
        }
        
        return l;
    }
};