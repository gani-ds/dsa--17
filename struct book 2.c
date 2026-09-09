struct book
{
    int book_id;
    char title[20];
    char author[20];
    int available;
};  

struct book *book = NULL;
int n;

void create()
{
    printf("Enter the number of books: ");
    scanf("%d", &n);

    book = (struct book *)malloc(n * sizeof(struct book));

    for (int i = 0; i < n; i++)
    {
        printf("Enter book ID: ");
        scanf("%d", &book[i].book_id);

        printf("Enter the title: ");
        scanf("%s", book[i].title);

        printf("Enter author: ");
        scanf("%s", book[i].author);

        book[i].available = 1;
    }
}