#include <stdio.h>
#include <string.h>

#define p printf
#define s scanf

typedef struct {
    char title[50];
    char author[50];
    int full;
}books;

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
void cambiar(char words[50]);
int main() {
    int option,continuar;
    
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
             alibra();
             break;
         }
         case 2: {
             abook();
             break;
         }
         case 3: {
             cbook();
             break;
         }
     }
     p("you wanna continue?\n\n");
     p("[1] - continue. \n");
     p("[2] - exit the program. \n\n");
     p("option: ");
     s("%i",&continuar);
     p("\n");
    } while(continuar == 1);
    
    
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
            cambiar(libraries[i].title);
            p("\n");
            p("introduced libraries: %i \n\n",i+1);
            libraries[i].full = 1;
            aux = 1;
            }
        }
    }
void abook() {
    int i,j,aux;
    int option;
    
    aux = 0; 
    
    do{
        p("select the library where you wanna store the book: \n\n");
        for(i = 0; i < 50; i++) {
            if(libraries[i].full == 1){
                p("%i - %s. \n",i,libraries[i].title);
            }
            }
            p("option: ");
            s("%i",&option);
            p("\n");
    } while(option < 0 || option > 50);
    
    for(i = 0; i < 50; i++) {
        for(j = 0; j < 50 && aux == 0; j++) {
            if(libraries[option].book[j].full == 0) {
                p("introduce the book title: ");
                fflush(stdin);
                fgets(libraries[option].book[j].title,50,stdin);
                cambiar(libraries[option].book[j].title);
                p("\n");
                p("now introduce the author: ");
                fflush(stdin);
                fgets(libraries[i].book[j].author,50,stdin);
                cambiar(libraries[i].book[j].author);
                p("\n");
                p("registed books: %i. \n\n",j+1);
                libraries[i].book[j].full = 1;
                aux = 1;
         }        
      }
   }
}
void cbook() {
    int i,j,aux,compare;
    char check[50];
    aux = 0;
    p("introduce the book you wanna search: ");
    fflush(stdin);
    fgets(check,50,stdin);
    cambiar(check);
    p("\n");
    for(i=0; i < 50; i++) {
        for(j = 0; j < 50; j++) {
           
            if(compare == 0){
                p("%s is in the %s shelving and belongs to %s. \n\n",libraries[i].book[j].title,libraries[i].book[j].author);
                aux = 1;
            }
        }
    }
}
void empty() {
    int i,j;
    
    for(i = 0; i < 50; i++) {
        for(j = 0; j < 50; j++) {
        libraries[i].full = 0;
        libraries[i].book[j]. full = 0;
     
            }
        }
    }
 
void cambiar(char words[50]) {
    int i,j,aux;
    
    aux = 0;
    
    for(i=0; i < 50; i++) {
        for(j = 0; j < 50; j++) {
            if(libraries[i].title[j] == '\n') {
                libraries[i].title[j] = '\0';
            }
            if(libraries[i].book[j].author[j] == '\n') {
                libraries[i].book[j].author[j] = '\0';
            }
            if(libraries[i].book[j].title[j] == '\n') {
                libraries[i].book[j].title[j] = '\0';
            }
    }
}
}


