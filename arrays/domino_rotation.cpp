//Concept is just check x number which is in top and bottom so to make top same it will have two possiblity that bottom[i] should be there or it should make top[i] and if any one of the ith position is not possible to make swap then return -1 for that top or bottom. And first same the top array with top[0] or bottom[0] then do the same with bottom array. Then return the minimum of the two swaps if both are not -1. 
class Solution {
public:
    
    int rotate(vector<int> &top,vector<int> &bottom){
        int x = top[0];
        int swapsTop = 0;
        int swapsBottom = 0;
        //make top elements equal.
        for(int i=0;i<top.size();i++){
            if(top[i] == x)
                continue;
            if(bottom[i] == x){
                swapsTop++;
            }
            else{
                //means x is not in both.
                swapsTop = -1;
                break;
            }
        }
        x = bottom[0];
        //mwake bottom elements equal to x.
        for(int i=0;i<bottom.size();i++){
            if(top[i] == x)
                continue;
            if(bottom[i] == x){
                swapsBottom++;
            }
            else{
                //means x not in top and bottom.
                swapsBottom = -1;
                break;
            }
        }
        if(swapsTop == -1 && swapsBottom == -1){
            return -1;
        }
        else if(swapsTop == -1){
            return swapsBottom;
        }
        else if(swapsBottom == -1){
            return swapsTop;
        }
        else{
            return min(swapsTop,swapsBottom);
        }
    }
    
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        //if top or bottom equal to same elements then no swapping needed.
        // for(int i=0;i<top.size()-1;i++){
        //     if(top)
        // }
        int topSwaps = rotate(tops,bottoms);
        int bottomSwaps = rotate(bottoms,tops);
        
        if(topSwaps == -1 && bottomSwaps == -1){
            return -1;
        }
        else if(topSwaps == -1){
            return bottomSwaps;
        }
        else if(bottomSwaps == -1){
            return topSwaps;
        }
        else{
            return min(topSwaps,bottomSwaps);
        }
        
    }
};