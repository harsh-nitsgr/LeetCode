class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int res=INT_MAX;
        for(int i=0,a=0,b=0;i<tops.size();i++){
            if(tops[i]!=tops[0])a++;
            if(bottoms[i]!=tops[0])b++;
            if(tops[i]!=tops[0] and bottoms[i]!=tops[0])break;
            if(i==tops.size()-1)res= min(a,b);
        }
        for(int i=0,a=0,b=0;i<tops.size();i++){
            if(bottoms[i]!=bottoms[0])a++;
            if(tops[i]!=bottoms[0])b++;
            if(bottoms[i]!=bottoms[0] and tops[i]!=bottoms[0])break;
            if(i==tops.size()-1)res=min(res,min(a,b));
        }
        
        return res==INT_MAX ?-1:res;
    }
};