#include <stdio.h>

int main() {
    double num1, num2;
    int int1, int2, intResult;
    double result;
    char operator;

    printf("Enter an operator (+, -, *, %, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '%':
            // convert to integers first
            int1 = (int)num1;
            int2 = (int)num2;

            if (int2 != 0) {
                intResult = int1 % int2;
                printf("%d %% %d = %d\n", int1, int2, intResult);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
