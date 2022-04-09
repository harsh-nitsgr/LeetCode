class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1)return nums;
        sort(nums.begin(),nums.end());
        vector<pair<int,int>>v;
        
        int n=nums[0];
        int count=0;
        int size=nums.size();        
        
        for(int i=0;i<size;i++){
            while(i<size and nums[i]==n)count++,i++;
            v.push_back(make_pair(n,count));
            if(i==size)continue;
            count=0;
            n=nums[i];
            i--;
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         if(nums.size()==1)return nums;
//         unordered_map<int,int>map;
//         priority_queue<pair<int,int>>q;
//         vector<int>v;
//         for(auto &num:nums) map[num]++;
//         // By default a max heap is created ordered by first element of pair.
//         // because we want priority to be decided by second of map 
//         // so in pair second should be taken first
        
//         for(auto &it:map){
//             q.push({it.second,it.first});
//         }
//         while(!q.empty()){
//             if(v.size()==k)break;
//             v.push_back(q.top().second);
//             q.pop();
//         }
//         return v;
//     }
// };
