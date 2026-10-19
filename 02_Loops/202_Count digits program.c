
#include <stdio.h>
int main()
{
   long int num,count=0;
   printf("Enter the Number: ");
   scanf("%ld",&num);
   
   while(num>0)                                        //Loop runs until number becomes zero.
   {
       num=num/10;                                     //Number gets divide until it gets zero,
       count++;                                        //More the number divides, more the count increase.s
   }
   printf("The total digits in Number is: %d",count);  //This prints the total of digits.
   
   return 0;
}