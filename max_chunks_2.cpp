//concept is just use two arrays ,one sorteed and other as it is given in question.Just get difference of both array elements and store in another vector. Basically then we will check the subarray sum when becomes zero so chunks++.
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //sort the givem vector and then compare it with unsorted vector and check for the subarrays when their sum becomes equal to 0 ,then increment chunks.
        int n = arr.size();
        vector<int> chunkArr;
       
        int chunks = 0;
        
        //copy arr in chunksArr.
        for(int i=0;i<n;i++){
            chunkArr.push_back(arr[i]);
        }
        sort(arr.begin(),arr.end());
        //createnew vector to store subarray.
        vector<int> subArr;
        for(int i=0;i<n;i++){
            subArr.push_back(arr[i] - chunkArr[i]);
        }
        
        //now check for 0 sum using sliding window in subArr vector.
        long long int currsum = 0;
        for(int i=0;i<n;i++){
            currsum += subArr[i];
            if(currsum == 0){
                chunks++;
            }
        }
        if(chunks == 0){
            return 1;
        }
        
        return chunks;
        
    }
};