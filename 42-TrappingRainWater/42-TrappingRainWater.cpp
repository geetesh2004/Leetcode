// Last updated: 9/5/2025, 9:00:25 PM
class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
        int l = 0, r = n - 1;
        int LMax = 0, RMax = 0, total = 0;
        while(l<r){
            if(height[l]<=height[r]){
                if(LMax>height[l]){
                     total += LMax-height[l];
                }
            else{
                LMax = height[l];
            }
            l=l+1;
        }
        else{
            if(RMax>height[r]){
                total+=RMax-height[r];
            }
            else{
                RMax=height[r];
            }
            r=r-1;
        }
        }
        return total;
        
    }
};