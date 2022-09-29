//concept is take start,mid and end for 0,1,2 and check mid if it is 2, swap with end and if it is 0,swap with start else mid++.
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int start = 0;//for making 0 elements 
        int mid = start;//for making 1 elements
        int end = n-1;//for making 2 elements.
        
        while(mid <= end){
            
            while(a[end] == 2){
                end--;
            }
            
            if(a[mid] == 2){
                swap(a[mid],a[end]);
                end--;
            }
            else if(a[mid] == 0){
                swap(a[mid],a[start]);
                start++;
                mid++;
            }
            else{
                mid++;
            }
        }
        return;
    }
    
};