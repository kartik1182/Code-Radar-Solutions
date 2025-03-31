#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int min = 0;
    int max = 0;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    print("%d %d", min, max);
}




