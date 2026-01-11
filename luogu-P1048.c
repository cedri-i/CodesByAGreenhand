#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))

int main(){
    int N,W;
    scanf("%d %d",&N,&W);
    int w[N],v[N];
    for(int i=0;i<N;i++){
        scanf("%d %d\n",&w[i],&v[i]);
    }
    int dp[N][W];
    for(int i=0;i<W;i++)dp[0][i]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<W;j++){
            dp[i][j]=max(dp[i-1][j],(dp[i-1][j-w[j]]+v[i]));
        }
    }
    printf("%d",dp[N-1][W-1]);
    return 0;
}