#include <stdio.h>

int main(){
    printf("%zd %zd %zd %zd %zd %zd %zd %zd %zd %zd %zd %zd %zd",
sizeof(int),
sizeof(short),
sizeof(long),
sizeof(long long),
sizeof(unsigned long),
sizeof(unsigned long long),
sizeof(unsigned short),
sizeof(float),
sizeof(double),
sizeof(long double),
sizeof(float _Complex),
sizeof(double _Complex),
sizeof(_Bool)
);
}