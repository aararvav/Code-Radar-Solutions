#include<stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if(marks >= 90)
    {
        printf("A");
    }
    else if(marks >= 80 && marks < 90)
    {
        printf("B");
    }
    else if(marks >= 70 && marks < 80)
    {
        printf("C");
    }
    else if(marks >= 60 && marks < 70)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}