#include <stdio.h>

int main(){
    int nums;
    scanf("%d", &nums);

    for(int i=1; i<=nums; i++){
        int sum=0;
        sum=sum+i;
        printf("%d", sum);
    }
    return 0;
}