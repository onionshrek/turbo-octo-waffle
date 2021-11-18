# VIRTUAL LIBRARY

My project consist of a virtual library where anyone can register any book to store it, or counting the quantity of books that where stored in the library.

The library starts with 0 books, and it needs to receive a library, book or (if you already have one), book. So the first visual panel will show this:
    
    select an option:   
     [1] - add library.
     [2] - add book.
     [3] - consult book. 
     option: 

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

This three options will show another three options where the user can choose to continue searching or adding books in our virtual library
