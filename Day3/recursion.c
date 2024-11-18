

    #include <stdio.h>
    #include <stdlib.h>

    int recursion (int x,int y);
    int main() {

// RECURSION
  int result = recursion(2,10);
      printf("%d",result);

        return 0;
    };

    int recursion (int x,int y){

    if(y==0)
    return 1;
    return x * recursion(x,y-1);}

