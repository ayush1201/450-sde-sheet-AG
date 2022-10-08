class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //transpose of matrix
        for(int row=0;row<n;row++){
            for(int col=row;col<n;col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        //now swapping first and last cols.
        for(int row=0;row<n;row++){
            int scol = 0;
            int ecol = n-1;
            while(scol < ecol){
                swap(matrix[row][scol++],matrix[row][ecol--]);
            }
            
        }
    }
};