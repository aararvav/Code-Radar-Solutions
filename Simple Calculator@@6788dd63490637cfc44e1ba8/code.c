#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d", num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}