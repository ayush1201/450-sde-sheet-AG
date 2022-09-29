//unoptimized map solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map(0);
        vector<int> ans;
        int n = nums.size();
        int majorEle = n/3;
        
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        
        for(auto i:map){
            if(i.second > majorEle){
                ans.push_back(i.first);
            }
        }
        return ans;
    
    }
};