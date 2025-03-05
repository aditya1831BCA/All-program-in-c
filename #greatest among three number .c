#include<stdio.h>
int main()
{
  int num1,num2,num3;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the secound number:");
scanf("%d",&num2);
printf("Enter the third number:");
scanf("%d",&num3);
if(num1>=num2 && num1>=num3)
{
printf("number1 is greter");
}
 else if(num2>=num1 && num2>=num3)
{
printf("number2 is greter");
}
else
{
printf("number3 is greter");
}
return 0;
}
