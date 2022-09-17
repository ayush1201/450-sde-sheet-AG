//just use the impact property and check for max element till when can it impact and when max == i ,simply chunks++.
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunks = 0;
        int maxEle = 0;
        
        for(int i=0;i<arr.size();i++){
            maxEle = max(maxEle,arr[i]);
            //if maxEle reaches the same index means all before its index are smaller than maxEle and update chunk.
            if(maxEle == i)
                chunks++;
        }
        return chunks;
    }
};