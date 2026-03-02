class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMax(n);
        vector<int>rightMax(n);

        leftMax[0] = 0;
        rightMax[n-1] = 0;

        for(int i = 1; i < n ; i++){
            leftMax[i] = max(leftMax[i-1],height[i-1]);
        } 
        for(int i = n-2; i >= 0; i--){
            rightMax[i] = max(rightMax[i+1],height[i+1]);
        }

        int waterTrapped = 0;
        for(int i = 0 ; i<n ; i++){
            int currWater = min(leftMax[i],rightMax[i])-height[i];
            if(currWater > 0){
                waterTrapped += currWater;
            }
        }
        return waterTrapped;
    }
};