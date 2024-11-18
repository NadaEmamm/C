    #include <stdio.h>
    #include <stdlib.h>
    #define SIZE 12

    int main() {
        int arr [SIZE] ={0};
        int i;
        int j;
        int col = 3;
        int row ;
        int k ;
        int numOfElement;

        printf(" please Enter The number of elements ");

                scanf(" %d",&numOfElement);

                        if(numOfElement % col != 0)

                        printf(" please Enter The number of elements ");

                         else {row = numOfElement / col;

                        for(j=0; j < numOfElement ;j++){

                printf(" please Enter The number in index %d : ",j);
                scanf(" %d",&arr[j]);
                };

            for(i=0;i < row ;i++){

             for(j=0;j< col;j++){
               printf("%d ",arr[i*col+j]);
                          };
                            printf("\n ");}

};


        return 0;
    };







