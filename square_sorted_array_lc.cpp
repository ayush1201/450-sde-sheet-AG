//2 pointer approach ,concept is take start and end and traverse in array ,and compare which of the square is big of the 2 increment or decrement pointers according to that and store result in res from backwards.
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int ele = n-1;
        int start = 0;
        int end = n-1;
        while(start <= end){
            int leftAns = nums[start]*nums[start];
            int rightAns = nums[end]*nums[end];
            
            res[ele--] = max(leftAns,rightAns);
            if(leftAns < rightAns){
                end--;
            }
            else if(leftAns > rightAns){
                start++;
            }
            else{
//                 in this case it means both can be same and there nums[start],nums[end] can also be same so just end--.
                
                end--;
            }
        }
        return res;
    }
};