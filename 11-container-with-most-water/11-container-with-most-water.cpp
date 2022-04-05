// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left=0,right=height.size()-1;
        
//         int Max=-1;
        
//         while(left<right){
//             int minh=min(height[left],height[right]);
            
//             Max=max(Max,(right-left)*minh); 
            
//             height[left]<height[right]? left++:right--;
//         }
//         return Max;
//     }
// };
class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int ans{};
        for (int i = 0, j = height.size() - 1; i < j;){
            int h1 = height[i];
            int h2 = height[j];
            int h = min(h1, h2);
            ans = max(ans, h * (j - i));
            if (h1 < h2) i++;
            else j--;
        }
        return ans;
    }
};