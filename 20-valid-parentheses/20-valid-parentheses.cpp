class Solution {
public:
    bool isValid(string s) {
        int n= s.length();
        if(n==1)return 0;
        
        stack<char>S;        
        for(int i=0;i<n;i++){
            
            if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
                S.push(s[i]);
            }
            if(s[i]==')'){
                if(!S.empty() and S.top()=='(') S.pop();
                else return 0;
            }
            else if(s[i]=='}'){
                if(!S.empty() and S.top()=='{') S.pop();
                else return 0;
            }
            else if(s[i]==']'){
                if(!S.empty() and S.top()=='[') S.pop();
                else return 0;
            }
        }
        if(S.empty())return 1;
        return 0;
    }
};