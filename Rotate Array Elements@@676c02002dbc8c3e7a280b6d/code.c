#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d" , &arr[i]);
    }

    int k;
    scanf("%d", &k);

    // for rotation of array elements
    for(int i = 0; i < n; i++){
        arr[i] = arr[k%n];
    }

    for(int i = 0; i < n; i++){
        printf("%d" , arr[i]);
    }


}