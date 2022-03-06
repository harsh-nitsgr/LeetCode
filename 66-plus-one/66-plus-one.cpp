class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size()-1;        
        while(n>=0 and digits[n]==9) digits[n--]=0;
        if(n ==-1) digits.insert(digits.begin(),1);
        else digits[n]+=1;
        return digits;
    }
};