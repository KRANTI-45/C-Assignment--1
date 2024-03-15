/*
4. Write a program to print following pattern.
a. Using multiple printf statements
b. Using single printf statement
*
**
***
****
*****
*/
 
 //a. Using multiple printf statements

/*
# include<stdio.h>
int main ()
{
char c ;

printf(" * \n %c",c);
printf("* * \n %c",c);
printf("* * * \n %c",c);
printf("* * * * \n %c",c);
printf("* * * * * \n %c",c);
return 0 ;
}
*/
 
//b. Using single printf statement


# include <stdio.h>
int main ()
{
char c;
printf(" * \n * * \n * * * \n * * * * \n * * * * * \n ,%c,%c,%c,%c,%c",c,c,c,c,c);
}
