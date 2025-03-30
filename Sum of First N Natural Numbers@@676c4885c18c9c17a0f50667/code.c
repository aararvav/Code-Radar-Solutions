#include <stdio.h>

int main(){
    int nums;
    scanf("%d", &nums);

    int sum=0;
    for(int i=1; i<=nums; i++){
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}