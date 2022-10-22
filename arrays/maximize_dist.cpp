//concept is make to arrays left and right which will keep the tracks of left and right sitting people and then take min of left[i] and right[i] 
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int> left(n,200000);
        vector<int> right(n,200000);
        
        //for left sitting people.
        for(int i=0;i<n;i++){
            if(seats[i] == 1){
                left[i] = 0;
            }
            else{
                if(i > 0)
                    left[i] = left[i-1] + 1;
            }
        }
        
        //for right sitting 
        for(int i=n-1;i>=0;i--){
            if(seats[i] == 1){
                right[i] = 0;
            }
            else{
                if(i < n-1)
                    right[i] = right[i+1] + 1;
            }
        }
        
        int maxDist = INT_MIN;
        for(int i=0;i<n;i++){
            maxDist = max(maxDist,min(left[i],right[i]));
        }
        return maxDist;
    }
};