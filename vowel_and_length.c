#include <stdio.h>

int main(void)
{
    char name[100];
    int i = 0;
    int length = 0;
    int vowels = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0')
    {
        if (name[i] == '\n')
        {
            break;
        }

        length++;

        // check vowels (both lowercase and uppercase)
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
            name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' ||
            name[i] == 'O' || name[i] == 'U')
        {
            vowels++;
        }

        i++;
    }

    printf("Number of characters (excluding newline): %d\n", length);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}
