#include <stdio.h>
#include <string.h>


int main(){
    char s[]="Hello, World!";
    printf("%lu\n",strlen(s));
    printf("%lu\n",sizeof(s));
    return 0;
}
//at the end of the string there is a '\0', not included in the length of string but in the size of array.