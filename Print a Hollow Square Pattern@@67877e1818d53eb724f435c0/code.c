#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1 ; i <=n; i++){
        if( i == 1 || i == n-1){
            for(int j = 1; j<=n;j++){
                printf("*");
            }
        }
        else{
            for(int j = 1; j<=n;j++){
                if(j == 1 || j == n-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}