#include <stdio.h>
#include <stdlib.h>
int main(){

int row;
int col;
int n;
printf("Enter The Size");
scanf(" %d",&n);
if(n %2 == 0){
printf("Enter The Size with the odd number");
}
else{
row = 1;
col = (n + 1)/2;
printf("Number 1 is in row %d and column %d \n",row,col);
};

for(int i =2 ; i<= n*n;i++){
if((i-1)% n !=0){
    row--;
    col--;

    if(row < 1)
    row = n;
    if(col <1)
    col = n;
    }
    else{
    row++;
    }
  printf("Number %d is in row %d and column %d \n", i,row,col);
};





return 0;
}
