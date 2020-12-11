#include<stdio.h>
int main()
{
      //initialization of Year
     int year;

      //to take user input
      printf("Enter Year for find leap year or not : ");
     scanf("%d",&year);

       //we use this statement for check leap year 
     if(((year%4==0)&&(year%100!=0)) || (year%400==0))
          printf("%d is a Leap Year",year);

      //not leap year
      else
         printf("%d is not a Leap Year",year);
return 0;

}
