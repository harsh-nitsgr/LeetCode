class Solution {
public:
    //depends on the differnce between costs of travelling thorugh a and b
    static bool cmp(vector<int>a,vector<int>b){
        return a[1]-a[0]<b[1]-b[0];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res=0;
        sort(costs.begin(),costs.end(),cmp);
        for(int i=0;i<costs.size();i++){
            if(i<costs.size()/2)res+=costs[i][1];
            else res+=costs[i][0];
        }
        return res;
    }
};
// class Solution {
// public:
//     int twoCitySchedCost(vector<vector<int>>& costs) {
//         vector<int>difference;
//         int res=0;
//         for(auto &cost:costs){
//             difference.push_back(cost[1]-cost[0]);
//             res+=cost[0];
//         }
//         sort(difference.begin(),difference.end());
        
//         for(int i=0;i<costs.size()/2;i++){
//             res+=difference[i];
//         }
//         return res;
//     }
// };
