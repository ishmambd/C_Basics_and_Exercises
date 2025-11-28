#include <stdio.h>

int main(void)
{
    int choice = 0;
    double temp = 0.0;
    double result = 0.0;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &temp);
            result = (temp * 9.0 / 5.0) + 32.0;
            printf("Temperature in Fahrenheit: %.2f\n", result);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &temp);
            result = (temp - 32.0) * 5.0 / 9.0;
            printf("Temperature in Celsius: %.2f\n", result);
            break;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
