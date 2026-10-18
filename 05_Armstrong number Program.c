#include <stdio.h>

int main()
{
    int num, original, rem, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);                       // Takes the input number

    original = num;                          // Stores the original number

    while (n > 0)                            // Processes every digit
    {
        rem = num % 10;                      // Extracts the last digit
        sum = sum + rem * rem * rem;         // Adds the cube of the digit
        n = num / 10;                        // Removes the last digit
    }

    if (sum == original)                     // Compares the sum with the original number
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
