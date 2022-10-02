//concept is same as 2 sum ,instead of finding sum in powers of 2, just store elements in map with frequency and check for sum as powers of 2 that y = sum - x is there in map and x==y then add freq of that x - 1 to ans else just add freq to ans this is to ensure to not to take the number itself repeatationn .Then after all processing of particular x and all powers then just decrease frequency of x in map so that again that number should not be counted.
class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int> mp;
        int ans = 0;
        long long modulo = 1000000007;
        for(auto i:deliciousness){
            mp[i]++;
        }
        
        for(auto x:deliciousness){
            for(int i=0;i<=21;i++){
                
                int z = 1<<i;;
                int y = z - x;
                //if y is in map then just check y should not be equal to x if equal just remove itself and add the frequency else just add the frequency.
                if(mp.find(y) != mp.end()){
                    if(y == x){
                        ans += mp[y] - 1;
                    }
                    else{
                        ans += mp[y];
                    }
                    ans %= modulo;
                }
            }
            //x ko process kar chuke hai frequency ghata do.
            mp[x]--;
        }
        return ans;
    }
};