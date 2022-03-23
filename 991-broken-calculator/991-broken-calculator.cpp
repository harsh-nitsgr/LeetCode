class Solution {
public:
    int brokenCalc(int sv, int target) {
        
        int count=0;
        while(sv!=target){
            if(target % 2==0 and target>sv) target/=2;
            else target+=1;
            count++;
        }
        return count;
    }
};