// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s){
    
    if(s.size()%2!=0)return -1;
    stack<int>st;
    
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(!st.empty() and st.top()=='{' and s[i]=='}'){st.pop();continue;}
        st.push(s[i]);
    }
    
    int count=0;
    while(!st.empty()){
        int tp=st.top();
        st.pop();
        int tp1=st.top();
        st.pop();
        if(tp==tp1)count++;
        else count+=2;
    }
    return count;
}