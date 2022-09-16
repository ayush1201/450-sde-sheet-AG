//use stack and map.The main concept is just traverse in num2 vector and check if stack is not empty and stack.top is less than curr element ,then create mapping of stack top with that with element and just push element in the stack.
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(),-1);
        stack<int> s;
        
        unordered_map<int,int> greater;
        for(int i=0;i<nums2.size();i++){
            int element = nums2[i];
            while(!s.empty() && s.top() < element){
                greater[s.top()] = element;
                s.pop();
            }
            //now add element in stack
            s.push(element);
        }
        //now traverse in nums1 and check if the nums1[i] is in map and if yes just find the mapping of that and update in res.
        for(int i=0;i<nums1.size();i++){
            int ele = nums1[i];
            //check if the ele is in map just find its mapping and update at nums1[i].
            if(greater.find(ele) != greater.end()){
                res[i] = greater[ele];
            }
        }
        return res;
    }
};