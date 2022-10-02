bool findPair(int arr[], int size, int n){
    //code
    vector<int> arr2;
    for(int i=0;i<size;i++){
        arr2.push_back(arr[i]);
    }
    sort(arr2.begin(),arr2.end());
    
    int i = 0,j = 1;
    while((i < size) && (j < size)){
        if(arr2[j] - arr2[i] == n){
            return true;
        }
        else if(arr2[j] - arr2[i] > n){
            i++;
            if(i == j){
                j++;
            }
        }
        else{
            j++;
        }
    }
    return false;
    
}