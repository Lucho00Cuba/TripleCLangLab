#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 5;
    double decimal = 10.5;
    char letter = 'A';

    printf("%d => %p\n", number, &number);
    printf("%lf => %p\n", decimal, &decimal);
    printf("%c => %p\n", letter, &letter);

    int *pnumber = &number;
    printf("%d => %p\n", *pnumber, pnumber);

    return 0;
}