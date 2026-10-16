
#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    int firstno;
    int secondno;
    int choice;
    int again;

    printf("WELCOME TO THIS CALCULATOR\n");

    do
    {
        printf("\nPlease enter the first number: ");
        scanf("%d", &firstno);

        printf("Your first number is: %d\n", firstno);

        printf("Please enter the second number: ");
        scanf("%d", &secondno);

        printf("Your second number is: %d\n", secondno);

        printf("\nEnter your operator:\n");
        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");

        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Your answer is: %d\n",
                   firstno + secondno);
        }
        else if (choice == 2)
        {
            printf("Your answer is: %d\n",
                   firstno - secondno);
        }
        else if (choice == 3)
        {
            printf("Your answer is: %d\n",
                   firstno * secondno);
        }
        else if (choice == 4 && secondno != 0)
        {
            float division = (float)firstno / secondno;
            printf("Your answer is: %.2f\n", division);
        }
        else if (choice == 4 && secondno == 0)
        {
            printf("Error: Cannot divide by zero!\n");
        }
        else
        {
            printf("Error: Invalid operator!\n");
        }

        printf("\nDo you want to use the calculator again?\n");
        printf("Enter 1 for Yes or any other number for No: ");
        scanf("%d", &again);

    } while (again == 1);

    printf("\nThank you for using the calculator!\n");

    return 0;
}
