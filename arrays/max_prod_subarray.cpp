//concept same hai kadanes jesa bas idher negative pe bhi depend karega agar odd hai ya even to uske liye first we have iterated from start and got the max prod possible ,then we have iterated from last to get updated the max prod because the negatives will be in reverse order so this was intiution.
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currProd = 1;
        int res = INT_MIN;
        if(nums.size() == 1){
            return nums[0];
        }
        for(auto i:nums){
            currProd = i*currProd;
            res = max(res,currProd);
            
            if(currProd == 0){
                currProd = 1;
            }
        }
        
        //ab peeche se dekna hai max prod kyunki jo neg phele aye the starting vo peeche se me badme aayenge to aise karke chalo.
        currProd = 1;
        for(int i=nums.size()-1;i>=0;i--){
            currProd = currProd*nums[i];
            res = max(currProd,res);
            
            if(currProd == 0){
                currProd = 1;
            }
        }
        return res;
    }
};