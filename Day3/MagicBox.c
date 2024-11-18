#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void gotoxy(int x, int y);
int main(){

int row;
int col;
printf("The Size of the array is 9 \n");

row = 1;
col = (SIZE + 1)/2;

    gotoxy(col * 10 , row *2 + 1);
    printf("1");



    for(int i =2 ; i<= SIZE*SIZE;i++){
    if((i-1)% SIZE !=0){
    row--;
    col--;

    if(row < 1)
    row = SIZE;
    if(col <1)
    col = SIZE;
    }
    else{
    row++;
    }

    gotoxy(col * 10 , row *2 +1);
    printf("%d",i);
    }

return 0;
}
void gotoxy(int col, int row) {
    printf("\033[%d;%dH", row, col);
}
