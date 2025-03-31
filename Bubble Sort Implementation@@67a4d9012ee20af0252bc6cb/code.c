void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 1; i <= n; i++){
        if(arr[i-1] > arr[i]){
            swap(&arr[i-1], &arr[i]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}