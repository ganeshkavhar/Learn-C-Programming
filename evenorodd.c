#include<stdio.h> 
int main()
{
     int number; 
     printf("Insert a number \n");
     scanf("%d",&number);
   
  //Checking if the number is divisible by 2 
    if (number%2 == 0)
      printf("The number is even\n");
   
    else      
      printf("The number is odd\n");
   return 0;
  }
