#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("%.2f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}