#include <stdio.h>

int main(){
    int n;
    int b1=1;
    int b2=1;
    int mmm=1;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
    }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b1=1;
            b2=1;
            for(int p=0;p<n;p++){
                if(p==j){
                    continue;
                }
                if(a[i][j]<a[i][p]){
                    b1=0;
                    break;
                }
            }
            for(int q=0;q<n;q++){
                if(q==i){
                    continue;
                }
                if(a[i][j]>a[q][j]){
                    b2=0;
                    break;
                }
               
            }
                if(b1*b2){
                printf("%d %d",i,j);
                mmm=0;
                }
        }
    }
    if(mmm){
        printf("NONE");
    }
}