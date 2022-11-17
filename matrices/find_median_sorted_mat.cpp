class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here   
        vector<int> arr;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        int median = arr[(arr.size()-1)/2];
        return median;
    }
};