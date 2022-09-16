class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //if k is greater than size then it means one whole rotation is done and extra rotates so modulus is done.
        if(k > nums.size()){
            k = k%(nums.size());
        }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};