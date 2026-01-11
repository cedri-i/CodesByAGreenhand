#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("0");
    for(int j=1;j<n;j++)
    {
        int s=0;
    for(int i=0;i<j;i++){
        if(a[i]<a[j]){
            s++;
        }
    }
    printf(" %d",s);
    }
}