// class Solution {
// public:
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         // return 1;
//         int n=pushed.size();
//         stack<int>s;
        
//         for(int i=0,j=0;i<n;i++){
//             s.push(pushed[i]);
//             while(!s.empty() and s.top()==popped[j])s.pop(),j++;
//         }
//         return s.empty();
//     }
// };
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int i=0,j=0;
        for(auto &it:pushed){
            pushed[i++]=it;
            while(i>0 and pushed[i-1]==popped[j]) i--,j++;
        }
        return i==0;
    }
};
