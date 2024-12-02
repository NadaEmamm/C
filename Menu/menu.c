
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
            textbackground(BLUE);
            textcolor(WHITE);
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
            textbackground(BLUE);
            textcolor(WHITE);
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
            textbackground(BLUE);
            textcolor(WHITE);
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
            textbackground(BLUE);
            textcolor(WHITE);
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

//INSERT DATA FUNCTION



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

void modifyData(Employee emp[],int empSize){

int identity;
int valid =0;
int j=0;
printf("Please insert the ID :");
scanf("%d",&identity);

while (identity != emp[j].id || identity > empSize ||  getchar() != '\n'){ //-------------------------------> id validation
printf("not valid \n");
printf("Please insert the correct ID :");
scanf("%d",&identity);}

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
int j=0;
printf("Please insert the ID :");
scanf("%d",&identity);

while(identity > empSize ||  getchar() != '\n'|| identity != emp[j].id ){ //----------------------> size and num validation
printf("not valid \n");
printf("Please insert the ID :");
scanf("%d",&identity);
}

for(int i=0; i < empSize ;i++){
Employee arr[100]={0};
if (emp[i].id==identity ){
for(int j = i ; j< empSize;j++){


emp[j].name[j]=emp[j].name[j];
    emp[i].id= emp[j].id;
emp[i].salary=emp[j].salary;
}


}
printf("Employee with ID %d has been deleted.\n", identity);
    return ;

}
}

