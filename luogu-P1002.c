#include <stdio.h>

int ways(int x,int y,int xma,int yma){
    if(x<0||y<0){
        return 0;
    }
    if(x==0||y==0){
        return 1;
    }
    if(x==xma&&y==yma){
        return 0;
    }
    else if((x-xma)*(x-xma)+(y-yma)*(y-yma)==5){
        return 0;
    }
    else{
        return ways(x-1,y,xma,yma)+ways(x,y-1,xma,yma);
    }
}

int main(){
    int x,y,xma,yma;  
    scanf("%d %d %d %d",&x,&y,&xma,&yma);
    printf("%d",ways(x,y,xma,yma));
    return 0;
}