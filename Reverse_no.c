#include <stdio.h>
int main()
{
    int num, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);                            // Takes the input number,
  
    while (num > 0)                               // Repeats until all digits are processed.
    {
        digit = num % 10;                         // Extracts the last digit,
        reverse = reverse * 10 + digit;           // Adds digit to reversed number,
        num = num / 10;                           // Removes the last digit,
    }

    printf("Reversed number = %d", reverse);      // Displays the result.

    return 0;                                     // Ends the program.
}  