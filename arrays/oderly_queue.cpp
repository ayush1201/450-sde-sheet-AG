class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k > 1){
            //for k > 1 every case satisfies the condition and will always give sorted ans.
            sort(s.begin(),s.end());
        }
        else{
            string minStr = s;
            for(int i=1;i<s.length();i++){
                //rotate by 1 and check the min string possible.
                minStr = min(minStr, s.substr(i) + s.substr(0, i));
            }
            return minStr;
        }
        return s;
    }
};