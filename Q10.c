/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.
*/


# include<stdio.h>
# include<math.h>
int main()
{
double  a,b,c,s,Area,Perimeter;
printf("Enter the sides of triangle a, b, c:\n");
scanf("%lf %lf %lf",&a,&b,&c);
s=(a+c+b)/2;
Perimeter=a+b+(c*a)+c+b;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Perimeter of Triangle is:%lf\n",Perimeter);

printf("Area of Triangle is: %.2lf\n",Area);

return 0;


}

