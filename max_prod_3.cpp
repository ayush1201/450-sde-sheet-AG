class Solution {
public:
    //optimized approach is without sorting just find min 3 elements and max 3 elements.
    int maximumProduct(vector<int>& nums) {
//         //use window of size 3 and iterate over the nums.
//         int maxProd = 1;
//         int n = nums.size();
//         //sort the array since last 3 digits will have max product.
//         sort(nums.begin(),nums.end());
        
//         return (max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]));
        
        //optimized  is just find min1,min2 and max1,max,2,max3 by comparing each elements.
        int min1=INT_MAX,min2=INT_MAX;
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        
        int n = nums.size();
        //finding min elements.
        for(int i=0;i<n;i++){
            
            if(nums[i] <= min1){
                min2 = min1;
                min1 = nums[i];
            }
            else if(nums[i] <= min2){
                min2 = nums[i];
            }
            //finding max elements.
            if(nums[i] >= max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] >= max2){
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i] >= max3){
                max3 = nums[i];
            }
            
        }
        return (max(min1*min2*max1,max1*max2*max3));
        
    }
};