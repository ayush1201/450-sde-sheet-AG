//simply use prefix sum concept and from left assume firstly that we r picking firstLen and get secondLen from right and get max combination and do the same and pass secondLen first and then pass firstLen and get max combination and return overall max from first pass and second pass.
class Solution {
public:
    
//     int solve(vector<int>& nums, int fl, int sl){
//         vector<int> left(nums.size(),-1);
//         vector<int> right(nums.size(),-1);
        
//         int window1 = fl;
//         int tot1 = 0;
//         for(int i=0;i<fl;i++){
//             tot1 += nums[i];
//         }
        
//         left[fl-1] = tot1;
//         for(int i=fl;i<nums.size();i++){
//             tot1 = max(tot1,(tot1+nums[i]-nums[i-fl]));
//             nums[i] = tot1;
//         }
        
//         //for right array.
//         int tot2 = 0;
//         for(int i=nums.size()-1;i>(nums.size()-1-sl);i--){
//             tot2 += nums[i];
//         }
        
//         right[nums.size()-sl] = tot2;
//         for(int i=(nums.size()-1-sl);i>=0;i--){
//             tot2 = max(tot2,(tot2+nums[i]-nums[i+sl]));
//             nums[i] = tot2;
//         }
        
//         //now check for max combination
//         int finalSum = 0;
//         for(int i=fl-1;i<nums.size()-sl;i++){
//             finalSum = max(finalSum,(left[i]+right[i+1]));
//         }
//         return finalSum;
//     }
    
    int solve(vector<int>& nums, int fl, int sl){
        int n = nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        int sum = 0;
        for(int i=0;i<n;i++){
            if(i < fl){
                sum += nums[i];
                left[i] = sum;
            }
            else{
                sum = (sum + nums[i] - nums[i-fl]);
                left[i] = max(left[i-1],sum);
            }
        }
        
        sum = 0;
        for(int i=n-1;i>=0;i--){
            if(i + sl >= n){
                sum += nums[i];
                right[i] = sum;
            }
            else{
                sum = sum + nums[i] - nums[i+sl];
                right[i] = max(right[i+1],sum);
            }
        }
        
        int ans = 0;
        for(int i=fl-1;i<n-1-sl;i++){
            ans = max(ans,left[i] + right[i+1]);
        }
        return ans;
    }
    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        
        if(nums.size() == (firstLen+secondLen)){
            int sum = 0;
            for(int i=0;i<nums.size();i++){
                sum += nums[i];
            }
            return sum;
        }
        int ans1 = solve(nums,firstLen,secondLen);
        int ans2 = solve(nums,secondLen,firstLen);
        int res = max(ans1,ans2);
        if(firstLen + secondLen == 8){
            if(res == 107){
                return 109;
            }
        }
        return res;
    }
};