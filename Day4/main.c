

#include <stdio.h>
#include "day3.h"



int main() {
int arr[3][4]={0};
int i;
int j;
int sum [4]={0};
int value;
    for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("enter the number in [%d][%d]= ",i,j);
    scanf(" %d",&arr[i][j]);
    };

}
    for(i=0;i<3;i++){
    value =0;
    for(j=0;j<4;j++){
    value += arr[i][j];
    };
     sum[i]= value;
};
printf("%d %d %d \n", sum[0], sum[1] ,sum[2]);

    for(i=0;i<4;i++){
    value =0;
    for(j=0;j<3;j++){
    value += arr[j][i];
    };

     sum[i]= value /3;
};
printf("%d %d %d %d \n", sum[0], sum[1] ,sum[2]),sum[3]);

    return 0;

}


