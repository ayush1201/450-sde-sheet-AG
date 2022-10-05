class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int needed_plat=0,max_plat=0,i=0,j=0;
    	while(i < n && j < n){
    	    if(arr[i] <= dep[j]){
    	        //matlab pheli train jane se phele dusri aagayi to platform badao.
    	        max_plat++;
    	        i++;
    	    }
    	    else{
    	        //matlab aglgi train aayi aur pheli nikal gai to platform ghatao.
    	        j++;
    	        max_plat--;
    	    }
    	    needed_plat = max(needed_plat,max_plat);
    	   
    	}
    	 return needed_plat;
    }
};