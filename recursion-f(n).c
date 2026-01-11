#include <stdio.h>

int cur(int n,int f1,int a,int b){
    if(n==1){
        return f1;
    }else{
        return a*cur(n-1,f1,a,b)+b;
    }
}

int main(){
    int n,f1,a,b;
    while(1){
        scanf("%d %d %d %d",&n,&f1,&a,&b);
        printf("%d",cur(n,f1,a,b));
    }
}