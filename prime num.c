#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d=1",a);
    for(int k=2;a>1;k++)
    {
        while(a%k==0)
        {
            printf("*%d",k);
            a/=k;
        }
    }
    printf("\n");
    return 0;
}