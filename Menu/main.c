
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
#include <ctype.h>
    #include "day3.h"
    #define UP 65
    #define DOWN 66
    #define ESC 27
    #define ENTER 10
    #define BACK 127
    #define SIZE 100
    #define n  110
    #define y 121
    #define col 35
    #define row 5




typedef struct employee {
        char name[40];
        int  id;
        int salary;
}Employee;

void diplayData(Employee arr[],int empSize);
void insertData(Employee arr[],int empSize);
void modifyData(Employee emp[],int empSize);
void deleteData(Employee emp[],int empSize);
void resetBackgroundColor(){
 printf("\033[0m");} ;

    void blueNew();
    void blueExit();
	void blueDisplay();
	void blueDelete();
	void blueModify();


int main() {
 int i;
 int j;
 int ch;
 int flag =1;

 int currentPosition =1;
 Employee employeeData[SIZE] = {0};



//=============================================// printing main manu


while(flag==1){
if(currentPosition == 1){
blueNew ();
}
else if(currentPosition==2){
blueDisplay();
}
else if(currentPosition==3){
blueModify();
}
else if(currentPosition==4){
blueDelete();
}
else if(currentPosition==5){
    blueExit();
}
   //==========================================================// in and out pages
     if(ch == ENTER && currentPosition==1){
     printf("\a");
            clrscr();
            textcolor(GREEN);
            gotoxy(col,row-3);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(1,row);
           insertData ( employeeData,100); // -------------------> inserting data
            getch();
            printf("\a");

            while(getch()!= BACK){
            fflush(stdin);}
            }
//==============================================================================//

//DISPLAY

    if(ch==ENTER && currentPosition==2){ //----------------> Display
         printf("\a");
            clrscr();
            textcolor(GREEN);
            gotoxy(col,row-3);
            printf("Display\n");
            resetBackgroundColor();
            diplayData(employeeData,100);
            while(getch()!= BACK){fflush(stdin);}
            };

        //===================================================================//
    if(ch==ENTER && currentPosition==3){ //-----------------------> Modify
          printf("\a");
           clrscr();
            textcolor(GREEN);
            gotoxy(col,row-3);
            printf("Modify\n");
            resetBackgroundColor();
                         gotoxy(1,row );
            modifyData(employeeData,100);
            while(getch()!= BACK){fflush(stdin);}
            };
        //=====================================================================//
                if(ch==ENTER && currentPosition==4){ //---------------------> Delete
            printf("\a");
            clrscr();
                textcolor(GREEN);
            gotoxy(col,row-3);
            printf("Delete\n");
            resetBackgroundColor();
                         gotoxy(1,row);
            deleteData (employeeData,100);
            while(getch()!= BACK){fflush(stdin);}
            };

   if (ch==ENTER && currentPosition==5){ //-------------------------> Exit
             printf("\a");
             return 0 ;
          }
//=================================================// arrow section
        ch = getch();
    if (ch == 91) {
        for (int j = 0; j < 1; j++) {
            ch = getch();
        };
        };

if(ch==DOWN){
printf("\a");
 currentPosition ++;
 if (currentPosition >5){
    currentPosition = 1;
 };

}
 else if(ch==UP){
   currentPosition --;
 printf("\a");

    if (currentPosition <1){
   currentPosition =5;
 };
 }

};
 return 0;};

//===========================================================/

//DISPLAY

		void blueDisplay(){

            clrscr();
            gotoxy(col,row);

            printf("New\n");
            textcolor(GREEN);
             gotoxy(col,row+3);

            printf("Display\n");
            resetBackgroundColor();
             gotoxy(col,row +6);

            printf("Modify\n");
            gotoxy(col,row +9);

            printf("Delete\n");
            gotoxy(col,row +12);

            printf("Exit\n");

           }
//========================================================//

//NEW
		void blueNew(){

            clrscr();
            textcolor(GREEN);
            gotoxy(col,row);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(col,row+3);
            printf("Display\n");
                   gotoxy(col,row +6);
            printf("Modify\n");
              gotoxy(col,row +9);
            printf("Delete\n");
              gotoxy(col,row +12);
            printf("Exit\n");


};


//========================================================//

//Modify
		void blueModify(){


            clrscr();
            gotoxy(col,row);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(col,row+3);
            printf("Display\n");
            textcolor(GREEN);
            gotoxy(col,row +6);
            printf("Modify\n");
            resetBackgroundColor();
            gotoxy(col,row +9);
            printf("Delete\n");
              gotoxy(col,row +12);
            printf("Exit\n");


};

//========================================================//

//DElEte
		void blueDelete(){

            clrscr();

            gotoxy(col,row);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(col,row+3);
            printf("Display\n");
            gotoxy(col,row +6);
            printf("Modify\n");
            textcolor(GREEN);
            gotoxy(col,row +9);
            printf("Delete\n");
            resetBackgroundColor();
              gotoxy(col,row +12);
            printf("Exit\n");

};


//=====================================================//

   // EXIT
        void blueExit(){

            clrscr();
            gotoxy(col,row);
            printf("New \n");
            gotoxy(col,row+3);
            printf("Display\n");
            gotoxy(col,row +6);
            printf("Modify\n");
            gotoxy(col,row +9);
            printf("Delete\n");
            textcolor(GREEN);
            gotoxy(col,row +12);
            printf("Exit\n");
            resetBackgroundColor();
           };

//=====================================================//

//INSERT DATA FUNCTION

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void insertData(Employee emp[], int empSize) {
    char ch;
    int size;

    printf("Please enter the number of inserted employees: ");
    while (scanf("%d", &size) != 1 || size <= 0 || size > empSize) {
        printf("Error: not valid. Please enter a number between 1 and %d: ", empSize);
        while (getchar() != '\n'); // للتخلص من أي مدخلات غير صالحة (مثل الحروف)
    }

    for (int i = 0; i < size; i++) {
        int valid = 0;

        // إدخال الاسم والتحقق منه
        while (valid == 0) {
            printf("Please enter a valid name for the employee: ");
            scanf("%s", emp[i].name);
            valid = 1;
            for (int k = 0; emp[i].name[k] != '\0'; k++) {
                if (!isalpha(emp[i].name[k])) {
                    valid = 0;
                    break;
                }
            }
            if (valid == 0) {
                printf("Name must contain only alphabetic characters. Try again.\n");
            }
        }

        // إدخال ID والتحقق منه
        char id_input[100];
        printf("Please insert the ID: ");

        getchar();

        while (1) {
            fgets(id_input, sizeof(id_input), stdin);

            int valid_id = 1;
            for (int j = 0; id_input[j] != '\0'; j++) {
                if (id_input[j] == '\n') {
                    id_input[j] = '\0';
                    break;
                }
                if (!isdigit(id_input[j])) {
                    valid_id = 0;
                    break;
                }
            }

            if (valid_id) {
                emp[i].id = atoi(id_input);
                break;
            } else {
                printf("Error: not valid. Please insert a valid ID (only numbers): ");
            }
        }

        char salary_input[100];
        printf("Please enter the salary of the employee: ");

        while (1) {
            fgets(salary_input, sizeof(salary_input), stdin);
            int valid_salary = 1;
            for (int j = 0; salary_input[j] != '\0'; j++) {
                if (salary_input[j] == '\n') {
                    salary_input[j] = '\0';
                    break;
                }
                if (!isdigit(salary_input[j])) {
                    valid_salary = 0;
                    break;
                }
            }

            if (valid_salary) {
                emp[i].salary = atoi(salary_input);
                break;
            } else {
                printf("Error: not valid. Please enter a valid salary (only numbers): ");
            }
        }

        while (1) {
            printf("Enter 'y' to continue or 'n' to exit: ");
            ch = getchar();
            while (getchar() != '\n');
            if (ch == 'y' || ch == 'Y') {
                printf("You chose to continue.\n");
                break;
            } else if (ch == 'n' || ch == 'N') {
                printf("Exiting.\n");
                return;
            } else {
                printf("Invalid input. Please enter 'y' or 'n'.\n");
            }
        }
    }
}






 //=======================================================//

 //DISPLAY

void diplayData(Employee emp[],int empSize){
int k =0;
     gotoxy(5,row);

printf("================================================\n");

     gotoxy(5,row+1);

printf("|  ID  |       Name        |       Salary      |\n");

     gotoxy(5,row+2);

printf("================================================\n");


for(int i=0;i < empSize && emp[i].id != 0; i++){
        k++;
   gotoxy(5,row+3+i+k);
          k++;
printf("| %d  |       %s        |     %d        |\n",emp[i].id,emp[i].name,emp[i].salary);
     gotoxy(5,row+3+i+k);
printf("================================================\n");


};
return;
};

//=====================================================//

// MODIFY

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void modifyData(Employee emp[], int empSize) {
    int identity;
    int valid = 0;

    printf("Please insert the ID :");
    scanf("%d", &identity);

    while (identity <= 0 || identity > empSize) {
        textcolor(RED);
        printf("Error: not valid ID\n");
        resetBackgroundColor();
        printf("Please insert a valid ID: ");
        scanf("%d", &identity);
    }

    int employeeIndex = -1;
    for (int i = 0; i < empSize; i++) {
        if (emp[i].id == identity) {
            employeeIndex = i;
            break;
        }
    }

    if (employeeIndex == -1) {
        textcolor(RED);
        printf("Error: Employee with ID %d not found.\n", identity);
        resetBackgroundColor();
        return;
    }

    printf("The ID of the employee is %d\n", emp[employeeIndex].id);

    valid = 0;
    while (valid == 0) {
        printf("Please enter the name of the employee: ");
        scanf("%s", emp[employeeIndex].name);
        valid = 1;
        for (int k = 0; emp[employeeIndex].name[k] != '\0'; k++) {
            if (!isalpha(emp[employeeIndex].name[k])) {
                valid = 0;
                break;
            }
        }
        if (valid == 0) {
            printf("Name must contain only alphabetic characters. Try again.\n");
        }
    }
    printf("Please enter the salary of the employee: ");
    while (scanf("%d", &emp[employeeIndex].salary) != 1 || emp[employeeIndex].salary <= 0) {
        textcolor(RED);
        printf("Error: not valid salary.\n");
        resetBackgroundColor();
        printf("Please enter a valid salary (positive number): ");
        while (getchar() != '\n');
    }

    printf("Employee data updated successfully.\n");
}


//=======================================================//

//DELETE

void deleteData(Employee emp[],int empSize){

int identity;
int j=0;
printf("Please insert the ID :");
scanf("%d",&identity);

while(identity > empSize ||  getchar() != '\n'|| identity != emp[j].id ){ //----------------------> size and num validation
textcolor(RED);
printf("Error:not valid \n");
resetBackgroundColor();
printf("Please insert the ID :");
scanf("%d",&identity);
}
for(int i=0; i < empSize ;i++){
if (emp[i].id==identity ){
for(int j = i ; j< empSize-1;j++){
 emp[j] = emp[j + 1];
}
 emp[empSize - 1] = (Employee){0};
printf("Employee with ID %d has been deleted.\n", identity);
    return ;
}

}
}

