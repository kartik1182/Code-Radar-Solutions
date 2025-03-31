void findUnsortedSubarray(int arr[], int n){
    int i = 0, j = n-1;
    int left = 0, right = 0;
    while(i<j){
        if(arr[i] > arr[i+1]){
            left = i;
        }
        else if(arr[j-1] > arr[j]){
            right = j;
        }
        i++, j--;
    }
    return right-left-1;
}