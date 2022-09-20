//concept is simple approch 1 is just simply iterate over elements and diveide that element with overall multiplied product by taking care of zeroes.
//approach 2 - use prefix and suffix multiplied arrays and simply return prefix[i] * suffix[i] in reslutant array. 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        int mul1 = 1;
        int mul2 = 1;
    
        //storing prefix multiplication
        prefix[0] = 1;
        for(int i=1;i<n;i++){
            mul1 = mul1*nums[i-1];
            prefix[i] = mul1;
        }
        
        //now storing suffix multiplication
        suffix[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            mul2 = mul2*nums[i+1];
            suffix[i] = mul2;
        }
        
        //now multiplying prefix[i] and suffix[i] we will get product except self.
        for(int i=0;i<n;i++){
            nums[i] = prefix[i]*suffix[i];
        }
        return nums;
    }
};