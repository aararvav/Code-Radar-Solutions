#include <stdio.h>


int main() {

    int age,valid;
    scanf("%d %d", &age, &valid);
    
    if(age>18 && valid==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }





    return 0;
}