#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int p = 1;
    if(a < 2)
    {
        p = 0;
    }
    else{
        for(int i = 2; i < a; i++){
            if(a%i == 0)
            {
                p = 0;
                break;
            }
        }
    }

    if(p){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}