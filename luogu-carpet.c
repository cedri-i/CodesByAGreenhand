#include <stdio.h>
#define MAXN 10

int main(){
    int n;
    int x,y;
    int q=0,p=0;
    scanf("%d",&n);
    int a[MAXN][MAXN];
    int b[n][4];
    for(int i=0;i<n;i++){
        for(int j;j<4;j++){
            scanf("%d",&b[i][j]);
        }
    }
    scanf("%d %d",&x,&y);
    a[x][y]=-1;
    for(int i=0;i<n;i++){
        for(int j=b[i][0];p<b[i][2];j++){
            for(int k=b[i][1];q<b[i][3];q++,k++){
                a[j][k]=i;
            }
            p++;
            q=0;
        }
        p=0;
    }
    printf("%d",a[x][y]);
}//still a very bad answer.