class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int>difference;
        int res=0;
        for(auto &cost:costs){
            difference.push_back(cost[1]-cost[0]);
            res+=cost[0];
        }
        sort(difference.begin(),difference.end());
        
        for(int i=0;i<costs.size()/2;i++){
            res+=difference[i];
        }
        return res;
    }
};