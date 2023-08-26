#include<stdio.h>
#include<string.h>

struct book{
int bid, edition;
char name[30];
char author[20];
int price;
};

void input(struct book s[5], int n) ;
void show(struct book s[5], int n);

int main()
{
    struct book s[5];
    int ch=0;
    
    printf("Menu:\n");
    printf(" 1. Input book record. \n");
    printf(" 2. View books\n");
    printf(" 3. Search for a book that you want. \n");
    printf(" 4. Exit \n");
    printf("Enter your choice (1-4): \n");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:
        input(s , 5) ;
        break;
         
         case 2:
         show(s , 5);
         break;
         
         
         case 3:
         
         break;
         
         case 4:
         
         break;
         
         default :
         printf("Invalid choice . Please select from (1-4)\n");
         
                       }
    return 0;
}


void input(struct book s[5], int n) 
{

    {
    for (int i=0;i<n;i++)
{
        printf("Enter book id , book name , author name , edition and price:\n");
        scanf("%d", &s[i].bid);
        scanf("%s",  s[i].name);
        scanf("%s",  s[i].author);
        scanf("%d", &s[i].edition);
        scanf("%d", &s[i].price);
    }    
    }
}

void show(struct book s[5], int n)
      {        
        for (int i=0;i<n;i++)
        {
        printf("Book id is :%d\n", s[i].bid);
        printf("Name of the book is :%s\n", s[i].name);
        printf("Book's author name is:%s\n", s[i].author);
        printf("Edition of the book is: %d\n", &s[i]. edition );
        printf("The price od the book is :%d\n", &s[i].price);
        printf("Book added successfully.\n");
        }
    
}
