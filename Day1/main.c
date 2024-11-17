#include <stdio.h>
#include <stdlib.h>

int main()
{

char y = 'A';
int  x = 10;
float z = 10.5;
char f;

//Question 2
    printf(" Y =%c X =%d Z =%0.1f  \n",y ,x, z);
//Question 3
    printf("Enter F: ");
    scanf("%c" ,&f);
    printf("F= %c F=%d \n",f,f);
//Question 4
    printf("Hexa=%x Octal=%o \n",x,x);

    return 0;
}
