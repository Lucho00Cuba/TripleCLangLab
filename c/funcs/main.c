#include <stdio.h>
#include <stdlib.h>

void Greeting(char name[]){
    printf("-- start Greeting --\n");
    printf("Hello %s\n", name);
    printf("-- end Greeting --\n");
}

void HelloWorld(){
    printf("-- start HelloWorld --\n");
    printf("Hello World\n");
    Greeting("Lucho");
    printf("-- end HelloWorld --\n");
}

int cube(int number){
    printf("-- start cube --\n");
    int result = number * number * number;
    printf("The cube of %d is %d\n", number, result);
    printf("-- end cube --\n");
    return result;
}

int main(){
    printf("-- start main --\n");
    HelloWorld();
    cube(2);
    printf("-- end main --\n");
    return 0;
}