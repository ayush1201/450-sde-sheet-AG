//just 2 pointer and check which pointer is smaller just update that one.
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        
        int maxArea = INT_MIN;
        while(start < end){
            if(height[end] < height[start]){
                 maxArea = max(maxArea,height[end]*(end-start));
            }
            else{
                 maxArea = max(maxArea,height[start]*(end-start));
            }
           
            if(height[start] <= height[end])
                start++;
            else
                end--;
        }
        return maxArea;
    }
};