#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    b=a%2;
    if(b==1){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }
    scanf("%d",&a);
    return 0;
}