void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-j-1; i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}