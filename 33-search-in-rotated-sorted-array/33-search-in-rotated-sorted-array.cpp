class Solution {
public:
    
    int binary_search(vector<int>&nums,int target,int s,int e){
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]<target)s=mid+1;
            if(nums[mid]>target)e=mid-1;
        }
        return -1;
    }
    int searchUtil(vector<int>nums,int target,int start,int end){
        if(start>end)return -1;
        
        int mid=start+(end-start)/2;
        
        if(nums[mid]==target)return mid;
        if(nums[mid]<nums[start]){
            if(target>nums[mid] and target<nums[end])
                return binary_search(nums,target,mid,end);
            return searchUtil(nums,target,start,mid);
        }
        if(nums[mid]>nums[start]){
            if(target<nums[mid] and target>nums[start])
                return binary_search(nums,target,start,mid);
            return searchUtil(nums,target,mid,end);
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        if(nums[0]==target)return 0;
        if(nums[nums.size()-1]==target)return nums.size()-1;
        return searchUtil(nums,target,0,nums.size()-1);
    }
};