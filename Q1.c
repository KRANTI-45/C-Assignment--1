/* 1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/

# include<stdio.h>
int main ()
{
 unsigned int  a,b,sum,sub,mul;
printf("enter the first number a : \n");
scanf("%d",& a);

printf("enter the second number b : \n");
scanf("%d",& b);
sum= a + b;
printf("sum of a  and b is = %d\n",sum);

sub= a- b;
printf("difference of a and b is = %d\n ",sub);

mul= a* b;
printf(" product of a and b is =%d \n",mul);
return 0;
}
