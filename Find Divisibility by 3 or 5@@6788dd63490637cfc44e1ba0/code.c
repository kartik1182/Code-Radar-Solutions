#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a % 3 == 0){
        if(a%5 == 0){
            printf("Divisible by Both");
        }
        else{
            printf("Divisible by 3");
        }
    }
    else if(a % 5 == 0){
        if{
            printf("Divisible by 5");
        }
    }
    else printf("Not Divisible");
}