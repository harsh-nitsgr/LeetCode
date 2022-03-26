class Solution {
public:
    
    //using recurrsion
    
    int searchUtil(vector<int>&nums,int target,int l,int r){
        
        if(l>r)return -1;
        int mid=l+(r-l)/2;
        
        if(nums[mid]==target)return mid;
        if(nums[mid]<target) return searchUtil(nums,target,mid+1,r);
        return searchUtil(nums,target,l,mid-1);
        
    }
    
    int search(vector<int>& nums, int target) {
        
        return searchUtil(nums,target,0,nums.size()-1);
    }
};

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//         int l=0;
//         int r=nums.size()-1;
        
//         while(l<=r){
//             int m=l+(r-l)/2;
            
//             if(target>nums[m])l=m+1;
//             if(target<nums[m])r=m-1;
//             if(target==nums[m])return m;
//         }
//         return -1;
//     }
// };