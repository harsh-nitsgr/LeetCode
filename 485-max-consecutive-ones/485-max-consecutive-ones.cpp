class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur_max=0;
        int final_max=0;
        
        for(auto &num:nums){
            if(num!=0)cur_max++;
            else{
                final_max=max(final_max,cur_max);
                cur_max=0;
            }
        }
        return max(final_max,cur_max);
    }
};