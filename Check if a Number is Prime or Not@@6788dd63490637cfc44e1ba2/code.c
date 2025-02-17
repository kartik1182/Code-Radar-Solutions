#include <stdio.h>
#include <stdbool.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a == 2){
        printf("Prime");
        return 0;
    }
    else if ( a== 0 || a == 1) printf("Not Prime");
    bool flag;
    flag = true;
    for(int i = 2; i < a; i++){
        if(a % i == 0) flag = false;
    }
    if(flag) printf("Prime");
    else printf("Not Prime");
    return 0;
}