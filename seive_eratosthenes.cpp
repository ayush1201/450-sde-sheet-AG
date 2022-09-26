class Solution
{
public:
//algo is just go to unmarked elements or which are true means that they are not divisible by some number ,
//and push that element in ans vector and go to every unchecked element.
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        //by default all are assumed to be prime.
        vector<bool> prime(N+1,true);
        vector<int> ans;
        //mark 0 and 1 as non prime.
        prime[0] = prime[1] = false;
        
        for(int i=2;i<=N;i++){
            if(prime[i]){
                //just add that prime number to ans array.
                ans.push_back(i);
                for(int j=2*i;j<=N;j+=i){
                    //mark this element as non prime since it is multiple of i;
                    prime[j] = false;
                }
            }
        }
        
        return ans;
    }
};