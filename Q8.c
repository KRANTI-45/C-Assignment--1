/* Write a program to accept three integer numbers and find its average.*/

# include<stdio.h>
int main()
{
int Avg,Num1,Num2,Num3,Sum;
int Num4=3;
printf("Enter the first num: ");
scanf("%d",&Num1);

printf("Enter the second num: ");
scanf("%d",&Num2);

printf("Enter the third num: ");
scanf("%d",&Num3);
Sum=(Num1+Num2+Num3);
Avg=Sum/Num4;
printf("The average of three number is %d\n",Avg);

return 0;
}


