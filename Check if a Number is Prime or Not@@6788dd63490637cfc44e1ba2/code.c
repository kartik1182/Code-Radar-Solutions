#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int num = a-1;
    for(int i = 0; i < a; i++){
        if( a == 0 || a == 1 || a % 2 == 0) {
            printf("Not Prime");
            return 0;
        }
        else if(a % i != 0){
            if(i == num) printf("Prime");
        }
    }
    return 0;
}