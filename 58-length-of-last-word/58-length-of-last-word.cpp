class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.length();
        int count=0;
        int i=n-1;
        while(s[i]==' ')i--;
        
        for(i;i>=0;i--){
            if(s[i]==' ')break;
            count++;
        }
        return count;
        
    }
};