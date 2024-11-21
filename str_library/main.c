#include <stdio.h>
#include <stdlib.h>
void newStract(char destination [],char source[],int DestinationSize);
int newStrlen(char array[]);
int newStrCmp(char arr1[],char arr2[]);
void newUpperCase (char arr1[]);
void newLowerCase (char arr1[]);
void newStrcp (char target[],char source[] ,int targetSize);

int main()
{
    //strcat
        char test1[6]="nada";
        char test2[10]="emam";
        char test3[10]="-1xCd";
       char test5[5] ="SOSO";
       char test4[5] ="LALA";
        int result ;


       newStract(test2,test1 ,10);

  //====================================================//
  //strlen
   // printf("%d\n" , newStrlen(test2));
//======================================================//
 // strcmp
  //result = newStrCmp (test2,test1);
  //printf("%d", result);
//======================================================//
  //upperCase
//newUpperCase(test3);
//printf("\n");
// newLowerCase(test4);
//======================================================//
//strcp

 //newStrcp (test1,test3,100);

 return 0;
}

 // strcat
    void  newStract(char destination [],char source[],int DestinationSize){
                    int j =0;
                    int i =0;
                    int k = 0;

                while (destination [i]!= '\0'){
                    i++;
                        };

                while (source [k]!= '\0'){
                    k++;
                        };

                        if (DestinationSize -i > k){
                        printf("Valid \n");
                         while(source[j]!= '\0'){

                    destination[i]=source[j];
                        j++;
                        i++;
                    }
                    destination [i] = '\0';
                    printf("%s",destination);}

                 else printf("Not valid");}


//-----------------------------------------------------//

//strlen

  int newStrlen(char array[]){
  int i =0;
  while(array[i]!= '\0'){

  i++;
  }
  return i;
  }
//===================================================//

 //strcmp

 int newStrCmp(char arr1[],char arr2[]){

 int i =0; int j=0; int result;

    while(arr2[i]!= '\0'){
  i++;
  };

for(j = 0;j <= i;j++){
 if (arr1[0] > arr2[j])
    return result=1;
else if (arr1[0] < arr2[j])
    return result=-1 ;
else
    return result = 0;
}
;}

//===================================================//

//uppercase

  void newUpperCase (char arr1[]){
 int j=0;

     while(arr1[j]!= '\0'){

 if (arr1[j] >= 'a' && arr1[j] <= 'z')
    printf("%c",arr1[j]-32) ;

   else  printf("%c",arr1[j]) ;
  j++;
  };

};
//===================================================//

//lowerCase

  void newLowerCase (char arr1[]){
 int j=0;

     while(arr1[j]!= '\0'){

    if (arr1[j] >= 'A' && arr1[j] <= 'Z')

    printf("%c",arr1[j]+32) ;

   else  printf("%c",arr1[j]) ;
  j++;
  };

};
//===================================================//

//strcp

void newStrcp (char target[] , char source[], int targetSize){
int i=0;
int j=0;


while (source[j]!='\0'){
j++;
} //number of element in source arr

    if (targetSize >= j){
    printf("valid \n ");
    for( i =0; i < j; i++){
    target[i]=source[i];}

     target[j] = '\0';

    printf("%s",target);}

 else printf("Unvalid \n");
 };


