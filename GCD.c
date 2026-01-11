#include <stdio.h>

int main(){
    int a,b;
    int gcd=0;
    int i;
    i=1;
    scanf("%d %d",&a,&b);
    while(1)
    {
        if(i>a||i>b){
            break;
        }
        if(a%i==0&&b%i==0){
            gcd=i;
        }
        i++;
    }
    printf("%d",gcd);
    return 0;
}
/*应记住欧几里得所提供的更为简便的方法*/