#include <stdio.h>

void magicaa(int *pi);

int main(){
    int i;
    i=89;
    printf("%p\n",&i);
    magicaa(&i);
    return 0;
}

void magicaa(int *pi){
    printf("%d\n",*pi);
    printf("%p\n",pi);
}