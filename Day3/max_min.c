#include <stdio.h>
    #include <stdlib.h>
    #define SIZE 5

    void sortArray (int arr[]);
    int main() {

    int unSorted[SIZE] ={5,8,4,0,1};
      sortArray (unSorted);

        return 0;
    };

    void sortArray (int arr[]){
    int i;
    int j;
    int value ;
    for(i=0;i < SIZE -1; i++){
    for(j=0 ;j < SIZE -1 ;j++){
    if (arr[j] > arr[j+1] ){
    value = arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=value;
    }
    }
    }
     printf("The Maximum value =%d and The Minimum value = %d",arr[SIZE-1],arr[0]);
    };
