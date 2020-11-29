#include <stdio.h>
#include <string.h>
void countLettersA(char *c) {
    int i;
    int size = strlen(c);
    int b[97+26] = {0};
    for(i = 0; i< size; i++){
        b[c[i]]++;
    }
    for(i=65;i<91;i++){
        printf("%c: %d\n", (char)i, b[i]);
    }
} 
main() {
    char x[100];
    fgets(x, 99, stdin);
    countLettersA(x);
}
