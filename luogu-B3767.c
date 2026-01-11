#include <stdio.h>

void f(int n,int fusu,int xiaof,int f1[],int p1[],int f2[],int p2[]){
    if(fusu==0 && xiaof!=0){
        printf("FS wins!\n");
    }
    if(fusu!=0 && xiaof==0){
        printf("FR wins!\n");
    }
    int j=0;
    int start=f1[0];
    for(int i=1;i<n;i++){
        if(a[i]<start){
            j=i;
            start=a[i];
        }
    }
}

int main(){
    int T,n,m,r,s;
    int fusu,xiaof;
    scanf("%d\n%d %d %d %d\n",&T,&n,&m,&r,&s);
    int f1[n],p1[n],f2[n],p2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&f1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&p1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&f2[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&p2[i]);
    }
    fusu=n;
    xiaof=n;
    void
}