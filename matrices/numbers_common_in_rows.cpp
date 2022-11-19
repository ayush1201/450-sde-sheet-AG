#include <iostream>
using namespace std;

int main() {
    int mat[4][5] = {{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };
            unordered_map<int,int> mp;
            int cnt = 0;
            
            for(int i=0;i<4;i++){
                for(int j=0;j<5;j++){
                    mp[mat[i][j]] = 1;
                    
                    if(i > 0){
                        if(mp[mat[i][j]] == i){
                            mp[mat[i][j]] = i + 1; 
                        }
                    }
                }
            }
            //now traverse in map and get the numbers which are common in all rows.
	return 0;
}