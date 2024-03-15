/*2.
Write a program to accept a number and print the number in character, decimal, octal and hex
formats.*/

# include <stdio.h>
int main ()
{
int Num;
printf("Enter the number: ");
scanf("%d",&Num);
printf("The character format of Num is: '%c' \n",Num);

printf("The  decimal format of Num is: %d \n",Num);

printf("The octal format of Num is: %o \n",Num);

printf("The hexadecimal format of Num is: %x \n",Num);





return 0 ;
}

