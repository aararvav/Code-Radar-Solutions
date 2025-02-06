#include <stdio.h>
int main()
{
    int e;
    scanf("%d", &e);
    if(e > 0)
    {
        printf("Positive");
    }
    else if(e == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}