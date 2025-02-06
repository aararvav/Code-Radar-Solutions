#include <stdio.h>

int main() {
    int a , b;
    scanf("%d %d " , &a , &b);
    int lsb = a & 1 ;
    if ( lsb ==1 )
    printf("Set");
    else
    printf("Not Set" );
    return 0;
}