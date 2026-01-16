<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
void view();
void search();
void deleteb();
struct Book{
     int id;
     char title[40];
     char author[40];
     int isdeleted;
};
struct Book booklist[100];
int bookcount = 0;

int main()
{
 int choice ;
 char ch;
 //clrscr();

 do{
 printf("\n\n1->>Enter your choice for INSERT the book");
 printf("\n2->>Enter this choice for VIEW boook ");
 printf("\n3->>Enter this choice for SEARCH book ");
 printf("\n4->>Enter this choice for Delete the book ");
 printf("\nEnter your choice : ");
 scanf("%d",&choice);

 switch(choice)
 {
  case 1:
		printf("\n\nYou can select the option 1 for INSERT book");
		insert();
  break;
  case 2:

		printf("\n\nYou can select the option 2 for VIEW the Book name ");
		view();
  break;
  case 3:
		printf("\nYou can select the option 3 for SEARCH the book ");
		search();

  break;
  case 4:
		printf("\nYou can select the option 4  for the DELETE the book ");
		deleteb();
  break;
  default:
		printf("\n\n\t\tWRONG CHOICE");

  }
  printf("\n\nYou Want to continue programe YES(Y/y) and NO(N/n) : ");
  scanf(" %c",&ch);
  }
  while(ch == 'y' || ch == 'Y');
	printf("\n\t\t\tGOOD BYEEE");

  //getch();
  return 0;
 }

void insert()
{

 int id,enter,i;
 char title[40];
 char author[40];
 printf("\nHow many book you want to enter : ");
 scanf("%d",&enter);
 for(i=1;i<=enter;i++)
 {
  printf("\nEnter book no %d",i);
  if(bookcount<100)
   {
	printf("\nEnter your book id : ");
	scanf(" %d", &booklist[bookcount].id);

	getchar();

	printf("\nEnter book title : ");
	fgets(booklist[bookcount].title,40, stdin);

	printf("\nEnter book author : ");
	gets(booklist[bookcount].author);
	bookcount++;
   }
  else
  {
	printf("\nBOOK storage limit reached ( max 100 books).\n");
  }
 }
 printf("\nBOOK INSERTED SUCCESFULLY");
 printf("\n\t\tTHANK YOU...");

}

void view()
{
 int i;
 if(bookcount == 0)
 {
	printf("\nNO BOOK IS AVAILABLE IN THE LIST ");
 }
 else
 {
	printf("\nTHE BOOK LIST IS THE : ");
	for( i=0;i<bookcount;i++)

	  {
		printf("\nBOOK ID :%d", booklist[i].id);
		printf("\nBOOK TITLE : %s", booklist[i].title);
		printf("\nBOOK AUTHOR : %s",booklist[i].author);
	   }
  }
}



void search()
{
 int search,i,found=0;
 printf("\nEnter your book ID to search: ");
 scanf("%d",&search);
 for(i=0;i<=bookcount; i++)
 {
	if(search == booklist[i].id)
	 {
		found = 1;
		printf("\n\tBook ID : %d is Found",search);
		printf("\nBOOK ID :%d", booklist[i].id);
		printf("\nBOOK TITLE : %s", booklist[i].title);
		printf("\nBOOK AUTHOR : %s",booklist[i].author);
		break;
	  }
 }
 if(!found)
 {
	printf("\nBook ID %d is not found in the Library",search);
 }
}



void deleteb()
{
 int book,i;
 int found=0;

 printf("\nEnter the book ID you want to delete : ");
 scanf("%d",&book);

 for(i=0; i<=bookcount; i++ )
 {
  if(book == booklist[i].id && !booklist[i].isdeleted)
   {
		booklist[i].isdeleted =1;
		found = 1;
		printf("\nEntered Book ID %d is Deleted Succesfully",book);
		break;
   }
 }
 if(!found)
  {
		printf("Inserted Book ID : %d is Not Founded ",book);
  }
=======
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert();
void view();
void search();
void deleteb();
struct Book{
     int id;
     char title[40];
     char author[40];
     int isdeleted;
};
struct Book booklist[100];
int bookcount = 0;

void main()
{
 int choice ;
 char ch;
 clrscr();

 do{
 printf("\n\n1->>Enter your choice for INSERT the book");
 printf("\n2->>Enter this choice for VIEW boook ");
 printf("\n3->>Enter this choice for SEARCH book ");
 printf("\n4->>Enter this choice for Delete the book ");
 printf("\nEnter your choice : ");
 scanf("%d",&choice);

 switch(choice)
 {
  case 1:
		printf("\n\nYou can select the option 1 for INSERT book");
		insert();
  break;
  case 2:

		printf("\n\nYou can select the option 2 for VIEW the Book name ");
		view();
  break;
  case 3:
		printf("\nYou can select the option 3 for SEARCH the book ");
		search();

  break;
  case 4:
		printf("\nYou can select the option 4  for the DELETE the book ");
		deleteb();
  break;
  default:
		printf("\n\n\t\tWRONG CHOICE");

  }
  printf("\n\nYou Want to continue programe YES(Y/y) and NO(N/n) : ");
  scanf(" %c",&ch);
  }
  while(ch == 'y' || ch == 'Y');
	printf("\n\t\t\tGOOD BYEEE");

  getch();
 }

void insert()
{

 int id,enter,i;
 char title[40];
 char author[40];
 printf("\nHow many book you want to enter : ");
 scanf("%d",&enter);
 for(i=1;i<=enter;i++)
 {
  printf("\nEnter book no %d",i);
  if(bookcount<100)
   {
	printf("\nEnter your book id : ");
	scanf(" %d", &booklist[bookcount].id);

	getchar();

	printf("\nEnter book title : ");
	fgets(booklist[bookcount].title,40, stdin);

	printf("\nEnter book author : ");
	gets(booklist[bookcount].author);
	bookcount++;
   }
  else
  {
	printf("\nBOOK storage limit reached ( max 100 books).\n");
  }
 }
 printf("\nBOOK INSERTED SUCCESFULLY");
 printf("\n\t\tTHANK YOU...");

}

void view()
{
 int i;
 if(bookcount == 0)
 {
	printf("\nNO BOOK IS AVAILABLE IN THE LIST ");
 }
 else
 {
	printf("\nTHE BOOK LIST IS THE : ");
	for( i=0;i<bookcount;i++)

	  {
		printf("\nBOOK ID :%d", booklist[i].id);
		printf("\nBOOK TITLE : %s", booklist[i].title);
		printf("\nBOOK AUTHOR : %s",booklist[i].author);
	   }
  }
}



void search()
{
 int search,i,found=0;
 printf("\nEnter your book ID to search: ");
 scanf("%d",&search);
 for(i=0;i<=bookcount; i++)
 {
	if(search == booklist[i].id)
	 {
		found = 1;
		printf("\n\tBook ID : %d is Found",search);
		printf("\nBOOK ID :%d", booklist[i].id);
		printf("\nBOOK TITLE : %s", booklist[i].title);
		printf("\nBOOK AUTHOR : %s",booklist[i].author);
		break;
	  }
 }
 if(!found)
 {
	printf("\nBook ID %d is not found in the Library",search);
 }
}



void deleteb()
{
 int book,i;
 int found=0;

 printf("\nEnter the book ID you want to delete : ");
 scanf("%d",&book);

 for(i=0; i<=bookcount; i++ )
 {
  if(book == booklist[i].id && !booklist[i].isdeleted)
   {
		booklist[i].isdeleted =1;
		found = 1;
		printf("\nEntered Book ID %d is Deleted Succesfully",book);
		break;
   }
 }
 if(!found)
  {
		printf("Inserted Book ID : %d is Not Founded ",book);
  }
>>>>>>> a6987282c2d101123d3e147bf06953f7c20c8a2d
}