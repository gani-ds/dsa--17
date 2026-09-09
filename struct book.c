#include <stdio.h>
#include <stlib.h>
#include <string.h>

struct book
{
    int book_id;
    char title[20];
    char author[20];
    int available;
};
struct book*book=NULL;
   int n;
   void create()
   {
    printf("enter the number of books: ");
    scanf("%d",&n);
    book = (struct book*)malloc(n * sizeof(struct book));
    for (int i=0; i < n;i++)
   {
    printf("enter book ID: ");
    scanf("%d",&book[i].book_id);
        printf("enter the title: ");
        scanf("%s",book[i].title);
        printf("enter author: ");
        scanf("%s",book[i].author);
        book[i].available = 1; //mark the book available
   } 
   }    
