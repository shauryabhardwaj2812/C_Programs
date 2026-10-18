#include <stdio.h>

int main()
{
	int num, original, rem, reverse = 0;

	printf("Enter a number: ");
	scanf("%d", &num);                    // Takes the input number

	original = num;                       // Saves the original number for comparison

	while (num > 0)                       // Processes each digit
	{
		rem = n % 10;                     // Extracts the Remainder
		reverse = reverse * 10 + digit;   // Builds the reversed number
		num = num / 10;                   // Removes the last digit
	}

	if (original == reverse)              // Checks whether both numbers are equal
		printf("Palindrome number");
	else
		printf("Not a palindrome number");

	return 0;
}
