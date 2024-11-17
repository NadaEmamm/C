
#include <stdio.h>
#include <stdlib.h>
int main(){

int tableNum ;
 int result ;

for(tableNum =10 ; tableNum >=1 ; tableNum --){
for(result=1 ; result <=12; result++){

 int value = tableNum * result;
 printf("%d * %d = %d \n",tableNum ,result, value);

 };
 printf("************\n");
 };
  return 0;
};
