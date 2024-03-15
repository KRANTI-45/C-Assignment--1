/*Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)
______________________________________________________________________
Data Type
Size
Format Specifier
Range
______________________________________________________________________
char
1
%c
-128 to +127
unsigned char
1
%c
0 to 255
short int
2
%hd
-32768 to +32767
unsigned short int
2
%hu
0 to 65535
int
2
%d
-32768 to +32767
unsigned int
2
%u
0 to 65535
long int
4
%ld
–2,147,483,648 to 2,147,483,647
unsigned long int
4
%lu
0 to 4,294,967,295
_____________________________________________________________________

*/


#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
    printf("--------------------------------------------------------------------------------------------------------------------------\n");
    printf("    Data Type         Format Specifier            Size              range             \n");
    printf("---------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n int                       %%d                   %d               %d to %d",sizeof(int), INT_MIN, INT_MAX);
    printf("\n short int                 %%hd                  %d               %hd to %hd", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n signed char               %%c                   %d               %d to %d", sizeof(char), SCHAR_MIN, SCHAR_MAX);
    printf("\n unsigned char             %%c                   %d               %d to  %d", sizeof(unsigned char), U;CHAR_MAX);
    printf("\n unsigned short int        %%hu                  %d               %hu to %hu", sizeof(unsigned short int), USHRT_MAX);
    printf("\n unsigned int              %%u                   %d               %u to %u", sizeof(unsigned int), UINT_MAX);
    printf("\n long int                  %%ld                  %d               %ld to %ld", sizeof(long int), LONG_MIN,LONG_MAX);
    printf("\n unsigned long  int        %%lu                  %d               %lu to %lu", sizeof(unsigned long int), ULONG_MAX      );
    printf("\n float                     %%f                   %d               %f to %f", sizeof(float),FLT_MIN,FLT_MAX);
    printf("\n double                    %%lf                  %d               %lf to %lf", sizeof(double),DBL_MIN,DBL_MAX );
    printf("\n lond double               %%Lf                  %d               %Lf to %Lf", sizeof(long double), LDBL_MAX      );
    printf("\n---------------------------------------------------------------------------------------------------------------------------");

 return 0;
}
