class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int left = 0;
        int right = N-1;
        
        while(left < right){
            
            while(left < right && A[left] != 1){
                left++;
            }
            while(left < right && A[right] != 0){
                right--;
            }
            
            swap(A[left++],A[right--]);
        }
    }
};