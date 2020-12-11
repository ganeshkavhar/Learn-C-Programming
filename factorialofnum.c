#include <stdio.h>
int main()
{
 //initialize of variable
   int i, number, fact = 1;

   //to take user input.
   printf("Enter a number to calculate its factorial\n");
   scanf("%d", &number);

   //use this loop of following statement
    for (i = 1; i<= number;i++)
      fact = fact * i; 

    //display of factorial of a given number
    printf("Factorial of a number %d is = %d\n", number, fact);

  return 0;
}
