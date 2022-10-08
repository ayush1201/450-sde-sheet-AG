//concept is that we have to place all positive elements at their correct places and it should be in the range bet (0&&n) and then check which is first non correct positioned element return index+1 else if all are present at correct place then return n+1 means last element will be the smallest.
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i] > 0 && nums[i] < n && (nums[i] != nums[nums[i] - 1])){
                swap(nums[i],nums[nums[i] - 1]);
            }
        }
        //for loop for finding one mismatch.
        for(int i=0;i<n;i++){
            if(nums[i] != i+1)
                return i+1;
        }
        return n+1;
    }
};