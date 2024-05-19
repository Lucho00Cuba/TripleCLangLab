#include <stdio.h>
#include <stdlib.h>

int main(){
    // write file
    printf("-- start write-file --\n");
    FILE *parch = fopen("file.txt", "w");

    fprintf(parch, "Hello World\n");
    fprintf(parch, "Hello World 2\n");

    fclose(parch);
    printf("-- end write-file --\n");

    // read-file
    printf("-- start read-file --\n");
    char line[255];
    FILE *parch2 = fopen("file.txt", "r");
    while(fgets(line, 255, parch2) != NULL){
        printf("%s", line);
    }

    fclose(parch2);
    printf("-- end read-file --\n");

    remove("file.txt");

    return 0;
}