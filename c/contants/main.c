#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 1;
    printf("Number: %d\n", number);
    number = 2;
    printf("Number: %d\n", number);
    const int NUM = 1;
    printf("Number: %d\n", NUM);
    return 0;
}