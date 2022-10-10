class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] <= k){
                ++count;
            }
        }
        int badWord = 0;
        for(int i=0;i<count;i++){
            if(arr[i] > k){
                ++badWord;
            }
        }
        int ans = badWord;
        for(int i=0,j=count;j<n;i++,j++){
            if(arr[j] > k){
                ++badWord;
            }
            
            if(arr[i] > k){
                --badWord;
            }
            ans = min(ans,badWord);
        }
        return ans;
    }
};