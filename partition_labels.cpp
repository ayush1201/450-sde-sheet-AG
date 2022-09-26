//the concept is that simply check last occurrance of every letter in the string and store in a vector. Now check that if li[s[i]-'a'],end max is taken in end. Now see when i == end means till that all elements form one partition and after that no character will be repeating so make one partition and push in answer vector. 
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int> ans;
        vector<int> arr(26,0);
        int start = 0;
        int end = 0;
        
        //for storing last occurrance of elements.
        for(int i=0;i<n;i++){
            arr[s[i]-'a'] = i;
        }
        
        for(int i=0;i<n;i++){
            //taking end to last occurrance of that element.
            end = max(arr[s[i]-'a'],end);
            
            //check when i becomes equal to end
            if(i == end){
                ans.push_back(end-start+1);
                start = end+1;
            }
        }
        return ans;
    }
};