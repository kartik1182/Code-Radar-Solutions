#include <stdio.h>

int main(){
    char a_;
    scanf("%c", &a_);
    if(a_ >= 'a' && a_ <= 'z'){
        printf("Lowercase");
    }
    else if(a_ >= 'A' && a_ <= 'Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}