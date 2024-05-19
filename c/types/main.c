#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 1;
    float n32b = 1.123456789; 
    double n64b = 2.123456789;
    long double ln64b = 2.123456789;
    char letter = 'A';
    char word[] = "Hello";

    printf("Int: %d\n", n);
    printf("Float: %f\n", n32b);
    printf("Double: %lf\n", n64b);
    printf("Long Double: %Lf\n", ln64b);
    printf("Double All: %.12f\n", n64b);
    printf("Char: %c\n", letter);
    printf("Word: %s\n", word);
    return 0;
}