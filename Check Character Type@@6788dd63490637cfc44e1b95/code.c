#include <stdio.h>

int main(){
    char a_;
    scanf("%d", &a_);
    if(a_>=0 && a_<=9){
        printf("Digit");
    }
    else if(a_>= 'a' && a_<='z'){
        if(a_ == 'a' || a_ == 'e' ||a_ == 'u' ||a_ == 'i' ||a_ == 'o' ){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}