#include <stdio.h>

int main() {
    long long a ;
    scanf("%lld" ,&a);
    int msb = a & (1 <<  (31));
    if ( a & (1 << (31)))
    printf("Set");
    else
    printf("Not Set");
    return 0;
}