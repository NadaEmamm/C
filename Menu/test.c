
    #include <stdio.h>
    #include <stdlib.h>
    #include "day3.h"
    #define UP 65
    #define DOWN 66
    #define ESC 27
    #define ENTER 10
    #define BACK 127
    #define SIZE 100
    #define n  110
    #define y 121



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
 int col = 30;
 int row =1;
 int currentPosition =1;
 Employee employeeData[SIZE] = {{"ahmed",50,30000}};



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
            clrscr();
            textbackground(BLUE);
            textcolor(WHITE);
            gotoxy(col,row);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(1,row+3);
           insertData ( employeeData,100); // -------------------> inserting data
                       getch();
            while(getch()!= BACK){
            fflush(stdin);}
            }
//==============================================================================//

    if(ch==ENTER && currentPosition==2){ //----------------> Display
            clrscr();
            textbackground(BLUE);
            textcolor(WHITE);
             gotoxy(col,row);
            printf("Display\n");
            resetBackgroundColor();
             gotoxy(1,row+3);
            diplayData(employeeData,100);
            while(getch()!= BACK){fflush(stdin);}
            };

        //===================================================================//
    if(ch==ENTER && currentPosition==3){ //-----------------------> Modify
            clrscr();
            textbackground(BLUE);
            textcolor(WHITE);
             gotoxy(col,row);
            printf("Modify\n");
            resetBackgroundColor();
            modifyData(employeeData,100);
            while(getch()!= BACK){fflush(stdin);}
            };
        //=====================================================================//
                if(ch==ENTER && currentPosition==4){ //---------------------> Delete
            clrscr();
            textbackground(BLUE);
            textcolor(WHITE);
             gotoxy(col,row);
            printf("Delete\n");
            resetBackgroundColor();
            deleteData (employeeData,100);
            while(getch()!= BACK){fflush(stdin);}
            };

   if (ch==ENTER && currentPosition==5){ //-------------------------> Exit
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
 currentPosition ++;
 if (currentPosition >5){
    currentPosition = 1;
 };

}
 else if(ch==UP)
  currentPosition --;
   if (currentPosition <1){
   currentPosition =5;
 };
};
 return 0;};

//===========================================================/

//DISPLAY

		void blueDisplay(){
		 int row = 1;
            int col= 30;
            clrscr();
            gotoxy(col,row);
            printf("New \n");
            textbackground(BLUE);
            textcolor(WHITE);
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

            int row = 1;
            int col= 30;
            clrscr();
            textbackground(BLUE);
            textcolor(WHITE);
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

            int row = 1;
            int col= 30;
            clrscr();
            gotoxy(col,row);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(col,row+3);
            printf("Display\n");
               textbackground(BLUE);
            textcolor(WHITE);
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

            int row = 1;
            int col= 30;
            clrscr();

            gotoxy(col,row);
            printf("New \n");
            resetBackgroundColor();
            gotoxy(col,row+3);
            printf("Display\n");
               gotoxy(col,row +6);
            printf("Modify\n");
            textbackground(BLUE);
            textcolor(WHITE);
            gotoxy(col,row +9);
            printf("Delete\n");
            resetBackgroundColor();
              gotoxy(col,row +12);
            printf("Exit\n");

};


//=====================================================//

   // EXIT
        void blueExit(){
        int row = 1;
        int col= 30;
            clrscr();
            gotoxy(col,row);
            printf("New \n");
             gotoxy(col,row+3);
            printf("Display\n");

            gotoxy(col,row +6);
            printf("Modify\n");
              gotoxy(col,row +9);
            printf("Delete\n");
           textbackground(BLUE);
            textcolor(WHITE);
             gotoxy(col,row +12);
            printf("Exit\n");
            resetBackgroundColor();
           };

//=====================================================//

 void insertData(Employee emp[],int empSize){

char ch;
int size;
int j=0;
printf("Please enter the number of inserted employee ");
scanf("%d", &size);
while(size > empSize &&  getchar() != '\n'){ //----------------------> size and num validation
printf("not valid \n");
printf("Please enter the number of inserted employee ");
scanf("%d",&size);
}

for(int i=0; i<size;i++){
ch =0;
 int valid = 0;
            while (valid == 0) {
        printf("Please enter a valid name for the employee: ");
        scanf("%s", emp[i].name);
        valid = 1;
            for (int k = 0; emp[i].name[k] != '\0'; k++) {
            if (!isalpha(emp[i].name[k])) {
                valid = 0;

    break;
}}}
printf("Please insert the ID :");
scanf("%d",&emp[i].id);
while(getchar() != '\n'){ //----------------------> size and num validation
printf("not valid \n");
printf("Please insert the ID :");
scanf("%d",&emp[i].id);
}
//----------------------------------------------------------------//
printf("Please enter the salary of the employee: ");
scanf("%d", &emp[i].salary);
while( getchar() != '\n'){ //----------------------> num validation
printf("not valid \n");
printf("Please enter the salary of the employee: ");
scanf("%d", &emp[i].salary);};

//-------------------------------------------------------------//
  while (valid == 1) {
        printf("Enter 'y' to continue or 'n' to exit: ");
        ch = getchar();
        while (getchar() != '\n');
        if (ch == 'y' || ch == 'Y') {
            printf("You chose to continue.\n");
            valid = 0;
        } else if (ch == 'n' || ch == 'N') {
            printf("Exit\n");
            return;
        }
    }

} return;
}

 //=======================================================//

 //DISPLAY

void diplayData(Employee emp[],int empSize){


printf("| ID |        Name        |    Salary   |\n");

for(int i=0;i < empSize && emp[i].id != 0; i++){
printf("=========================================\n");

printf("|%d | %s             |   %d       |\n",emp[i].id,emp[i].name,emp[i].salary);



};
return;
};

//=====================================================//

void modifyData(Employee emp[],int empSize){

int identity;
int valid =0;
printf("Please insert the ID :");
scanf("%d",&identity);
while(identity > empSize ||  getchar() != '\n'){ //----------------------> size and num validation
printf("not valid \n");
printf("Please insert the ID :");
scanf("%d",&identity);
}
//============================================================================// done


for(int i=0; i < empSize ;i++){ //--------------------------------------->  validation of letters

if (emp[i].id==identity){

printf("the ID of the employee is %d \n",emp[i].id);
            int valid = 0;
            while (valid == 0) {
                printf("Please enter the name of the employee: ");
                scanf("%s", emp[i].name);
                valid = 1;
                for (int k = 0; emp[i].name[k] != '\0'; k++) {
                    if (!isalpha(emp[i].name[k])) {
                        valid = 0;
                        break;
}
}

}
printf("Please enter the salary of the employee: ");
scanf("%d", &emp[i].salary);


while( getchar() != '\n'){ //----------------------> num validation
printf("Please enter the salary of the employee: ");
scanf("%d", &emp[i].salary);
}
}


   }
    printf("Employee data updated successfully.\n");
}

//=======================================================//

//DELETE

void deleteData(Employee emp[],int empSize){

int identity;

printf("Please insert the ID :");
scanf("%d",&identity);

while(identity > empSize ||  getchar() != '\n'){ //----------------------> size and num validation
printf("not valid \n");
printf("Please insert the ID :");
scanf("%d",&identity);
}

for(int i=0; i < empSize ;i++){

if (emp[i].id==identity ){
 emp[i].name[i]='\0';
    emp[i].id=0;
   emp[i].salary=0;


printf("Employee with ID %d has been deleted.\n", identity);
    return;

}

}

}
