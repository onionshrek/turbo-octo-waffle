# VIRTUAL LIBRARY

My project consist of a virtual library where anyone can register any book to store it, or counting the quantity of books that where stored in a virtual library.
This books are going to be saved in different shelvings based on the names the user chooses to differentiate each shelving called "library"

# Program Application

The library starts without any books stored in the program, and it needs to receive a library, book or (if you already have one library). So the first visual panel will show this:
    
  ![image](https://user-images.githubusercontent.com/88512704/142443661-8340b734-fb97-4434-abba-b3e3a966793f.png)
  
The first step in the program is to insert the name of the library where the user wants to save its book, nevertheless, it will be demostrated on the following screenshot:

  ![image](https://user-images.githubusercontent.com/88512704/142449469-15d7d3cb-40d1-4ced-93a1-9fd2edea832f.png)
  
The next step is a little bit harder but, the program will guide the user to have an easier data registration. Starts with the book's name, then the author and the program will provide the amount of books that where registered in the program.

  ![image](https://user-images.githubusercontent.com/88512704/142444223-e4d711b4-4bc4-4f58-96c9-f1466feaa8db.png)

For some reason this part was failing in its function, but in theory its function is to search the book in the libraries and printout: %s is in the %s shelving and belongs to %s. \n\n" notwithstanding the problem, I will work in this to be perfectly working.
  
  ![image](https://user-images.githubusercontent.com/88512704/142449821-42ef9f26-e3d1-41e6-8db9-16031a8f794a.png)


# Program Structure

So the program is asking the user which option will be selected to operate in the computer, bassically this section will give an option in any of the cases where in the program will be designated as: alibra (new library), abook (new book), cbook (consult book). 

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

This three options are suppose to guide the users in an easier way to add or consult their books, in case 1 the following code will be required to act as a library creator, and its principal function is to name and create a shelving where the books are gonna be stored. 

P.D. I Dunno why, but  my compiler hates the word "change" so I only use it's spanish counterpart.

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
            p("introduced libraries: \n\n",i+1);
            libraries[i].full = 1;
            aux = 1;
            }
        }
    }

Then the abook section will work on the distribution of the books in the pre-saved libraries, in this section the user is able to write any title that don't go over 50 characters, if it does, the system won't save the title and it will pass away and return to the menu (the first question).

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
    
 This is an abook section that stores the author and book's name:
 
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
    
The purpose of the third case is to allow the user to search any book that the user registered in the past.  
    
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
# Video
