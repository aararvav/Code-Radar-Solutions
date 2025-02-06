#include <stdio.h>

int main() {
    
    char name[40];
    int age;
    char hobby[80];
    scanf("%s %d", &name, &age);
    scanf("%s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);

    return 0;
}