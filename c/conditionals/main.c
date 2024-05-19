#include <stdio.h>
#include <stdlib.h>

int main(){
    // control statements with if-else
    int n1;
    int n2;
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2){
        printf("%d is bigger than %d\n", n1, n2);
    } else if (n2 > n1){
        printf("%d is bigger than %d\n", n2, n1);
    } else{
        printf("%d and %d are equal\n", n1, n2);
    }

    // control statements with switch
    char operation;
    printf("Enter the operation [ '+' or '-' or '*' or '/' ]: ");
    scanf(" %c", &operation);

    switch(operation){
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1+n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1-n2);
            break;
        case '*':
            printf("%d * %d = %d\n", n1, n2, n1*n2);
            break;
        case '/':
            printf("%d / %d = %d\n", n1, n2, n1/n2);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}