class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r =  height.size()-1;
        int maxwtr = 0;

        while(l < r){
            
            if(height[l] < height[r]){
                maxwtr = max(maxwtr, (r-l) * height[l]);
                l++;
            } 
            else{
                maxwtr = max(maxwtr, (r-l) * height[r]);
                r--;
            }
        }
        return maxwtr;
    }
};