#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[50];
    int attempts = 0;
    const char correctPassword[] = "comp1000";
    int success = 0;

    do
    {
        printf("Enter password: ");
        scanf("%49s", input);  

        attempts++;

        if (strcmp(input, correctPassword) == 0)
        {
            printf("Access granted\n");
            success = 1;
            break;  
        }
        else
        {
            printf("Wrong password. Attempts left: %d\n", 3 - attempts);
        }

    } while (attempts < 3);

    if (!success)
    {
        printf("Access locked\n");
    }

    return 0;
}
