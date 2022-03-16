class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // return 1;
        int n=pushed.size();
        stack<int>s;
        
        for(int i=0,j=0;i<n;i++){
            s.push(pushed[i]);
            while(!s.empty() and s.top()==popped[j])s.pop(),j++;
        }
        cout<<s.size();
        return s.empty();
    }
};