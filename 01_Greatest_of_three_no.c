
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three numbers (a,b,c): ");
    scanf("%d%d%d", &a, &b, &c);              //Here we take 3 numbers as input.

    if(a==b && b==c)
    {
        printf("ALL NUMBERS ARE EQUAL.");     //If all numbers are equal, we print this.
    }
    else if(a>=b && a>=c)
    {
        printf("A is greatest.");             //Here we check if A is greatest or equal.
    }
    else if(b>=a && b>=c)
    {
        printf("B is greatest.");             //If the above condition is false, we check B.
    }
    else
    {
        printf("C is greatest.");             //If all above conditions are false, C is greatest.
    }

    return 0;
}

