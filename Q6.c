// Write a program to accept an integer value and print its table.

# include<stdio.h>
int main()
{
int Num,i,table;
printf("Enter the number: ");
scanf("%d",&Num);
 for (i=1;i <=10;i++)
{
 table=Num*i;
 printf("%d * %d = %d\n",Num,i,table);

}
return 0;
}
 
