#include <stdio.h>

struct ggui{
    int ff;
    char last[20];
}fellow[3];

int main(){
    int lab=111;
    printf("%p %x\n",&lab,&lab);
    struct ggui *him;
    fellow[0].ff=1;
    fellow[1].ff=2;
    fellow[2].ff=3;
    him=&fellow[0];
    printf("%d %d %d %d",him->ff,(him+1)->ff,(him+2)->ff,(*him).ff);
}
//the codes above proved that my comprehension about the pointer of structure is basically right.