#include <stdio.h>

struct library{
    char name[30];
    int quantity;
  struct customer {
    int id;
  }c[20];
  struct books{ 
    char author[30];
  }b[50];
}l[100];

void addbook(int n){
  for (int i=0; i<n; i++){
    printf("library name :");
    scanf("%s", &l[i].name);
    printf("book name : ");
    scanf("%s", &l[i].name);
    printf("book author name :");
    scanf(" %s", &l[i].b[i].author);
    printf("available quantity :");
    scanf("%d", &l[i].quantity);
  }
  for (int i=0; i<n; i++){
    printf("library name : %s", &l[i].name);
    printf("book name : %s", &l[i].name);
    printf("book author name : %s", &l[i].b[i].author);
    printf("available quantity : %d", &l[i].quantity);
  }
}


void searchbook(int n){ 
    char libraryname,bookname,authorname;
    int quantity,libnum;
    printf("library number :");
    scanf("%d", &libnum);
    printf("library name :");
    scanf("%s", &libraryname);
    printf("book name : ");
    scanf("%s", &bookname);
    printf("book author name :");
    scanf(" %s", &authorname);
    printf("needed quantity :");
    scanf("%d", &quantity);
    
 for (int i=0; i<n; i++){
 if(l[libnum].name==libraryname){
    if(l[libnum].b[i].author==authorname){
      if(l[libnum].quantity>=quantity){
              printf("book is available");
         }
      }
    }
  }
}


void change(){
    int booknum,libnum,authorname,bookname,z;
    printf("enter library number");
    scanf("%d", libnum);
    printf("enter book number");
    scanf("%d", booknum);
    printf("enter authorname");
    scanf("%d", authorname);
    printf("enter bookname");
    scanf("%d", bookname);
    printf("enter 1- author name; 2- book name");
     printf("enter  number");
    scanf("%d", z);
switch(z){
    case 1: 
    scanf("%s", authorname);
    l[libnum].b[booknum].author==authorname;
    
    case 2: 
    scanf("%s", bookname);
    l[libnum].b[booknum].author==bookname;
}
}

void delete(int n){
    int booknum,libnum;
    printf("enter library number that you want to delete");
    scanf("%d", libnum);
    printf("enter book number that you want to delete");
    scanf("%d", booknum);
    for(int i=booknum; i<n; i++){
        l[libnum].b[booknum]= l[libnum].b[booknum+1];
    }
}

int main()
{
    int z;
    int n=100;
    printf("enter 1- addbook; 2- searchbook; 3- modify; 4- delete"); 
    scanf("%d", &z);
switch(z){ 
  case 1: 
    addbook(n);
    break;
  
  case 2: 
    searchbook(n);
    break;
  
  case 3:
    change();
    break;
  
  case 4: 
    delete(n);
    break;
}
return 0;
}


