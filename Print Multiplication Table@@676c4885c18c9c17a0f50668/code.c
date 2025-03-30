#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i <= 10; i++){
        int product = i*n;
        printf("%d x %d = %d\n", n, i, product);
    }
    return 0;
}