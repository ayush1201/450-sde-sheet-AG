//logic is simple that first get count of subarrays which are less than upper bound and then get which are lower than lower bound and then subtract count of upper bound - count of lower bound.
class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countSubArrays(nums,right) - countSubArrays(nums,left-1);//why left -1 is because subarray lower than upper bound includes lower bound subarray also so left - 1 is taken as upper bound and subtracted from right bound.
    }
    
    int countSubArrays(vector<int> nums,int boundery){
        int count = 0,ans = 0;
        for(auto i:nums){
            count = i <= boundery ? count=count+1 : count=0;
            ans += count;
        }
        return ans;
    }
};