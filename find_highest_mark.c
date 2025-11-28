#include <stdio.h>

struct Student {
    char id[11];    
    char name[50];
    float mark;
};

int main(void)
{
    struct Student students[3];
    int i;
    int topIndex = 0;  

   
    for (i = 0; i < 3; i++)
    {
        printf("Enter ID for student %d: ", i + 1);
        scanf("%10s", students[i].id);

        printf("Enter name for student %d: ", i + 1);
        scanf(" %49[^\n]", students[i].name);  

        printf("Enter mark for student %d: ", i + 1);
        scanf("%f", &students[i].mark);

        printf("\n");
    }

    // Find highest mark
    for (i = 1; i < 3; i++)
    {
        if (students[i].mark > students[topIndex].mark)
        {
            topIndex = i;
        }
    }

    printf("Student with highest mark:\n");
    printf("ID: %s\n", students[topIndex].id);
    printf("Name: %s\n", students[topIndex].name);
    printf("Mark: %.2f\n", students[topIndex].mark);

    return 0;
}
