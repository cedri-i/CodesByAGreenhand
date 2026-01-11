#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(){
    int n_char=0;
    int n_word=0;
    char c;
    while((c=getchar())!=STOP){
        n_char++;
        if(isspace(c))n_word++;
    }
    printf("%d %d",n_char,n_word);
    return 0;
}