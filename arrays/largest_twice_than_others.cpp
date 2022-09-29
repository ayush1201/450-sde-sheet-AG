class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int flag = 0;
        int index = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] > max){
                max = nums[i];
                index = i;
            }
        }
        
        //now check for other elements whther their twice is greater than max.
        for(int i=0;i<n;i++){
            if(nums[i] != max){
                if(max < (2*nums[i])){
                    //means one elements is found which is not twice greater than max.
                    flag = 1;
                    break;
            }
          }      
        }
        if(flag == 1){
            return -1;
        }
        return index;
    }
};