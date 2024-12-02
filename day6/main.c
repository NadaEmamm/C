#include <stdio.h>
#include <stdlib.h>
#include "day3.h"
void swap (int *x ,int *y);

int main()
{

/*int x =3;
int y = 5;
swap ( &x , &y);
printf("X = %d  Y= %d" ,x,y);*/
//=========================================================// FIREST SWAP
int a = 10;
int b = 20;

//printf("%p %p",&a,&b);

     int  ch = getch();
    if (ch == 27) {
        for (int j = 0; j < 2; j++) {
            ch = getch();
        };
        printf("%d",ch);
        };




    return 0;
}
void swap (int *x ,int *y){

*x =*x +*y;
*y= *x -*y;
*x=*x -*y;

};
