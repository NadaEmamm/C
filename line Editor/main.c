#include <stdio.h>
#include <stdlib.h>
#include "day3.h"
#define SIZE 100
#define END 70
#define HOME 72
#define INSERT 50
#define BACK 127
#define DELETE 51
#define RIGHT 67
#define LIFT 68

int main()
{

char ch;
int i=0;
int j=0;
int value=0;
int currentPosition =1;
char data[SIZE] = {0};

//printf("Write your text here : ");

while(1){



 ch=getch();

if (value ==27){
  for (int j = 0; j <2; j++) {
            ch = getch();}

 if (value==RIGHT){
    currentPosition ++;
 if (currentPosition > SIZE-1){
    currentPosition =1;
 }

}

 else if(value==LIFT){
    currentPosition --;
    if (currentPosition <0){
        currentPosition = SIZE-1;

 }
 }
else if (value==END){
currentPosition = SIZE-1;

}
else if (value==HOME){
currentPosition = 0;

}

else if (value==DELETE){
if (currentPosition < SIZE - 1) {
                    // Shift characters left starting from current position
    for (int i = currentPosition; i < SIZE - 1; i++) {
       data[i] = data[i + 1];
                    }
    data[SIZE - 1] = 0;  // Clear the last character
    }

}

else if (value==INSERT){

  if (currentPosition < SIZE - 1) {
            data[currentPosition] = ch;
            currentPosition++;  // Move cursor right after insertion
            }
    };

}

for(i=0;i<SIZE-1;i++){
          value = getch();
         data[i]=value;
               printf("%c" , data[i]);



}



}//======================================================================================//   -----------------------------> form loop









//=========================================================================//




return 0;
}
/*int flag =1;
while(flag =1){
char ch = 0;
ch = getch();
printf("%d \n",ch);
printf("\n");*/
/*while (1) {
        // Display text with cursor
        for (int i = 0; i < SIZE; i++) {
            if (i == currentPosition)
                printf("_");  // Cursor at current position
            else
                printf("%c", data[i] == 0 ? ' ' : data[i]);  // Print space for uninitialized positions
        }

        ch = getch();  // Get key press

        if (ch == 'q') {
            break;  // Exit the program if 'q' is pressed
        } else if (ch == 27) {  // ESC key, start of an escape sequence for arrow keys
            ch = getch();  // Get '['
            ch = getch();  // Get direction character (e.g., 'C' for right arrow)

            if (ch == RIGHT) {  // Right arrow key
                if (currentPosition < SIZE - 1) {
                    currentPosition++;
                }
            } else if (ch == LIFT) {  // Left arrow key
                if (currentPosition > 0) {
                    currentPosition--;
                }
            } else if (ch == END) {  // End key
                currentPosition = SIZE - 1;  // Move cursor to the end
            } else if (ch == HOME) {  // Home key
                currentPosition = 0;  // Move cursor to the beginning
            } else if (ch == DELETE) {  // Delete key
                if (currentPosition < SIZE - 1) {
                    // Shift characters left starting from current position
                    for (int i = currentPosition; i < SIZE - 1; i++) {
                        data[i] = data[i + 1];
                    }
                    data[SIZE - 1] = 0;  // Clear the last character
                }
            } else if (ch == INSERT) {  // Insert mode (not implemented, just for key detection)
                // Insert logic could be implemented here
            }
        } else {
            // Insert character at current position if space is available
            if (currentPosition < SIZE - 1) {
                data[currentPosition] = ch;
                currentPosition++;  // Move cursor to the next position
            }
        }

        fflush(stdout);  // Ensure the output is printed immediately
    }

    printf("\nFinal text: ");
    for (int i = 0; i < SIZE; i++) {
        if (data[i] != 0)
            printf("%c", data[i]);
    }

    printf("\n");*/
