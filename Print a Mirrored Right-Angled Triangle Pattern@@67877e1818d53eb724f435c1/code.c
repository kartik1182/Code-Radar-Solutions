#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int k = n-i-1; k >0; k--){
            printf(" ");
        }
        for(int j = 0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

}