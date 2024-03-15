  /*
Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/
# include<stdio.h>
int main()
{
char ch;
int n;

printf("Enter the character:  \n");
scanf("%c",&ch);
printf("ASCII value of character %c in decimal = %d \n",ch,ch);

printf("ASCII value of character %c in hex = %x \n" ,ch,ch);
printf("ASCII value of character %c in octal=%o \n",ch,ch);

printf("Enter the ASCII value :  \n");
scanf("%d",&n);

printf(" character for ASCII value %d=%c \n",n,n);
return 0;
}
