#include <stdio.h>
#include <ctype.h>

char *p;
int b();
int a();
int c();
int a(){
    int result=b();
    while(*p=='+'||*p=='-'){
        if(*p=='+')result+=b();
        else result-=b();
    }
    return result;
}
int b(){
    int result=c();
    while(*p=='/'||*p=='*'||*p=='%'){
        switch (*p)
        {
        case '/':
            result/=c();
            break;
        case '*':
            result*=c();
            break;
        case '%':
            result%=c();
            break;
        default:
            break;
        }
    }
    return result;
}
int c(){
    int result;
    if(*p=='('){
        p++;
        result=a();
        p++;        //skip the right ')'
    }else{
        result=0;
        while(isdigit(*p)){
            result=result*10+(*p-'0');
            p++;
        }
    }
    return result;
}




int main(){
    fgets(p,999,stdin);
    printf("%d",a());
}