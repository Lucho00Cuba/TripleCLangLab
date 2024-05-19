#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Students {
    char name[30];
    int age;
    double score;
};

int main(){
    struct Students s1;
    strcpy(s1.name, "Luis");
    s1.age = 20;
    s1.score = 9.5;
    
    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", s1.age);
    printf("Student Score: %f\n", s1.score);
    return 0;
}