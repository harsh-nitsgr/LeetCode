class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        
        // 97
        
        while((n*26)-k>=26)s.push_back('a'),n--,k--;
        s.push_back((char)(k-(--n)*26+96));
        while(n--)s.push_back('z');
        
        return s;
    }
};