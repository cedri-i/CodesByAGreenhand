#include <stdio.h>

int main(){
    int n,m;
    int tab=1;
    int cnt=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
                a[j]=201;
            }
        }
    }
        for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[j]==b[i]){
                b[j]=201;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]==a[i]){
                tab=0;
                cnt++;
            }
        }
        if(tab&&a[i]<200){
            printf("%d ",a[i]);
        }
        tab=1;
        if(cnt==n){
            
        }
    }
    tab=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(b[i]==a[j]){
                tab=0;
            }
        }
        if(tab&&b[i]<200){
            printf("%d ",b[i]);
        }
        tab=1;
    }
    return 0;
}