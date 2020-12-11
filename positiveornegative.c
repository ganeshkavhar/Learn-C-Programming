#include<stdio.h>

int main()
{
   int num;

   printf("Insert a number: ");
   scanf("%d", &num);

//Condition to check if the number is negative or positive
  if (num <= 0)
  {
    if (num == 0)
      printf("The number is 0.");

    else
      printf("The number is negative");
  }
  else
    printf("The number is positive");

return 0;

}
