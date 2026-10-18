#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");  
    scanf("%d", &num);                              // Takes the number whose table is needed

    for (i = 1; i <= 10; i++)                       // Runs the loop from 1 to 10
    {
        printf("%d x %d = %d\n", num, i, num * i);  // Prints each multiplication
    }

    return 0;                                       // Ends the program
}
