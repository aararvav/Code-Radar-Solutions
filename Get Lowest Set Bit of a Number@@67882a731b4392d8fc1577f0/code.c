#include <stdio.h>


int main() {
    int a ;
    scanf("%d", &a) ; 
    if ( a == 0 ){
        printf("-1");
        return 0 ;
    }    
    printf("%d", __builtin_ctz(a));
    return 0;
}