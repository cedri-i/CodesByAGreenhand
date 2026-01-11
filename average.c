#include <stdio.h>

int main(){
    int a;
    int sum=0;
    int s=0;
    double ave;
    while(1){
        scanf("%d",&a);
        if(a<0){
            break;
        }
        sum+=a;
        s++;
    }
    ave=(double)sum/s;
    printf("%.2f\n",ave);
    return 0;
}