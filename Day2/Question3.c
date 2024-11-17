

#include <stdio.h>
#include <stdlib.h>
int main(){

 int menu;
 printf("Enter Menu Number:");
 scanf( " %d",&menu);
 switch (menu) {
 case 1 :
 printf("one");
 break;
  case 2 :
 printf("two");
 break;
  case 3:
 printf("three");
 break;
default:
printf("Not Avilable");
 };

 return 0;
};
