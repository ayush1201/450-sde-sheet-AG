//simply check srow,erow,scol,ecol and do right,down,left,up operations applying check conditions.
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int srow = 0;
        int erow = m-1;
        int scol = 0;
        int ecol = n-1;
        vector<int> ans;
        
        while(srow <= erow && scol <= ecol){
            //right movement
            if(srow <= erow && scol <= ecol){
                for(int j=scol;j<=ecol;j++){
                   ans.push_back(matrix[srow][j]); 
                }
            srow++;
            }
            
            //down movement
            if(srow <= erow && scol <= ecol){
                for(int i=srow;i<=erow;i++){
                   ans.push_back(matrix[i][ecol]); 
                }
            ecol--;
            }
             
            //left movement
            if(srow <= erow && scol <= ecol){
                for(int i=ecol;i>=scol;i--){
                   ans.push_back(matrix[erow][i]); 
                }
            erow--;
            }
            
            //up movement
            if(srow <= erow && scol <= ecol){
                for(int i=erow;i>=srow;i--){
                   ans.push_back(matrix[i][scol]); 
                }
            scol++;
            }   
        }
        return ans;
    }
};