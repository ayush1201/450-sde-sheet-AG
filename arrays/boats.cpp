class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int countBoats = 0;
        int start = 0;
        int end = people.size()-1;
        
        sort(people.begin(),people.end());
        
        while(start <= end){
            if(people[start] + people[end] <= limit){
                start++;
                end--;
                countBoats++;
            }
            else{
                end--;
                countBoats++;
            }
        }
        return countBoats;
    }
};