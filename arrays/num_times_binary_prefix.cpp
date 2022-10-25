//same as chunks problem 1 just index modification.
class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int chunks = 0;
        int impact = 0;
        for(int i=0;i<flips.size();i++){
            impact = max(impact,flips[i] - 1);
            if(impact == i){
                chunks++;
            }
            
        }
        return chunks;
    }
};