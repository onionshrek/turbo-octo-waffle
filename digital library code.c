#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

typedef struct {
    char title[50];
    char author[50];
    int full;
}book;

typedef struct {
    char title[50];
    int full;
    books book[50];
}library;

library libraries[50];

void alibra();
void abook();
void cbook();
void empty();
void chage(char words[50]);
int main() {
    int option,continue;
    
    empty();
    
    do {
     do {
         p("select an option:\n\n");
         p("[1] - add library. \n");
         p("[2] - add book. \n");
         p("[3] - consult book. \n\n");
         p("option: ");
         s("%i",&option);
     } while(option <1 || option > 3); 
     switch(option) {
         case 1: {
             alibra(option);
             break;
         }
         case 2: {
             abook(option);
             break;
         }
         case 3: {
             cbook(option);
             break;
         }
     }
     p("you wanna continue?\n\n");
     p("[1] - continue. \n");
     p("[2] - exit the program. \n\n");
     p("option: ");
     s("%i"),&continue;
     p("\n");
    } while(continue == 1);
    
    
    system("pause");
    return 0;
}
void alibra() {
    int i,aux;
    
    aux = 0;
    for(i = 0; i < 50 && aux ==0; i++) {
        if(libraries[i].full == 0) {
            p("insert a name to the library: ");
            fflush(stdin);
            fgets(libraries[i].title,50,stdin);
            change(libraries[i].title);
            p("\n");
            p("introduced libraries: \n\n",i+1);
            libraries[i].full = 1;
            aux = 1;
        }
    }
}
void abook() {
    int i,j,aux;
    
    aux = 0; 
}
void cbook() {
    
}
void empty() {
    int i,j;
    
    for(i = 0; i < 50; i++) {
        for(j = 0; j < 50; j++) {
        libraries[i].full = 0;
        libraries[i].books[j]. full = 0;
        
    }
 }

}
