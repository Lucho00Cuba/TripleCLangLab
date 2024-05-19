#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1;

    // loop with while
    printf("--- start while --\n");
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }
    printf("--- end while --\n");

    // loop with do-while
    printf("--- start do-while --\n");
    do{
        printf("%d\n", i);
        i++;
    } while(i <= 12);
    printf("--- end do-while --\n");

    // loop with for
    printf("--- start for --\n");
    for(int j = 0; j <= 10; j++){
        printf("%d\n", j);
    }
    printf("--- end for --\n");

    // loop with for (array)
    printf("--- start for (array) --\n");
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int j = 0; j < 10; j++){
        printf("%d\n", arr[j]);
    }
    printf("--- end for (array) --\n");

    // nested loops with an array of arrays
    printf("--- start nested loops --\n");
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\n", array[i][j]);
        }
    }
    printf("--- end nested loops --\n");

    return 0;
}