class Solution {
public:
    int maximumSwap(int num) {
        string JismeSwapKarna = to_string(num);
        string ifSorted = to_string(num);
        int size = JismeSwapKarna.length();
        sort(ifSorted.begin(),ifSorted.end());
        int start = 0;
        int end = size-1;
        int pos = 0;
        int fixed_pos;
        while(start < size && end >= 0){
            if(JismeSwapKarna[start] == ifSorted[end]){
                start++;
                end--;
            }
            else{
                //iska matlab JismeSwapKarna me swap karna hai ifSorted[end] ka last occurrance dhundhke .
                fixed_pos = start;
                while(start < size){
                    if(JismeSwapKarna[start] == ifSorted[end]){
                        pos = start;
                    }
                    start++;
                }
                swap(JismeSwapKarna[pos],JismeSwapKarna[fixed_pos]);
                break;
            }
        }
        
        int swappedBigger = stoi(JismeSwapKarna);
        return swappedBigger;
    }
};