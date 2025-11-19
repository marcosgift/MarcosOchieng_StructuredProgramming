#include <stdio.h>
#include <string.h>

int main(){

    char name[50];
    int length;
    printf("Enter your name: \n");
    scanf("%s", &name);

    length = strlen(name);
    printf("your name is %s, and it has %i characters", name, length);

    return 0;
}
