#include <stdio.h>

int main() {
    char name[100], hb[100];
    int age;
    scanf("%s %d", &name, &age);
    scanf("%s", &hb);
    printf("Name: %s\n",name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hb);
    return 0;
}