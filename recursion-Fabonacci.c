#include <stdio.h>

int f(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else{
        return (f(n-1)+f(n-2));
    }
}

int main(){
    int m=0;
    scanf("%d",&m);
    printf("%d",f(m));
    return 0;
}