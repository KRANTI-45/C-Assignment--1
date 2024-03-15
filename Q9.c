 //Write a program to convert temperature in Celsius to Fahrenheit and vice versa.


#include<stdio.h>
int main ()
{
	float Cl,Fh;
	printf("Enter the temperature in celsius: ");
	scanf("%f",&Cl);
	Fh=((1.8*Cl)+32);
	printf("Temperature in fahrenheit  is:%f\n",Fh);

	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f",&Fh);
	printf("Temperature in celsius  is:%f\n",Cl);
	
return 0 ;
}



