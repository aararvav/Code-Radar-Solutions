#include <stdio.h>
int main(){
    int y;
    scanf("%d", &y);
    if(y % 400 == 0)
    {
        printf("Leap Year");
    }
    else if(y % 100 == 0)
    {
        printf("Not a Leap Year");
    }
    else if(y % 4 == 0)
    {
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}