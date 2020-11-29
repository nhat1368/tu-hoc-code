#include <stdio.h>
main(){
    char *S = new char[1000];
    fgets(S, 1000, stdin);
    int i = 0, j;   
    while (S[i] != '\0'){
        if (S[i] != ' ')
        printf("%c ", S[i]);
        i++;
    }
}
