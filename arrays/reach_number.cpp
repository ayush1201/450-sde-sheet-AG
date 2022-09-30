//the concepts is twisted ,just go in right directions and check when sum becomes greater than target,if it is equal then return stepscount else check if (sum -abs(target)) even simply return stepcount or if (sum-abs(target)) odd then again repeat sum steps till difference becomes even because even means just we have to change positive to negative steps. 
class Solution {
public:
    int reachNumber(int target) {
        long long int n = 1;
        long long int sum = 0;
        long long int steps = 0;
        
        while(sum < abs(target)){
            sum = sum + n;
            n = n+1;
            steps++;
        }
        //means that sum becomes greater than or equal to target,check for even difference bet sum and target.
        if((sum - abs(target))%2 == 0){
            return steps;
        }
        else{
            //until the difference comes to be even just increase sum.
            while(true){
                if((sum - abs(target))%2 == 0){
                    return steps;
                }
                sum = sum + n;
                n = n+1;
                steps++;
            }
        }
        return steps;
    }
};