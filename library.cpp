// #include <iostream>
#include<stdio.h>
#include<string.h>
// using namespace std;

struct book{
int bid;
char name[30];
char author[20];
int price;
};

struct book books[1000];
int bookcount=0;

void add(){
	// char a[10];
 struct book temp; 
 printf("Enter the id of the book: \n");
scanf("%d",&temp.bid); 
    while ((getchar()) != '\n');

printf("Enter the name of the book: \n");

fgets(temp.name,30,stdin);
printf(" Enter the author of the book: \n");
fgets(temp.author,20,stdin);
 printf(" Enter the price of the book: \n");
scanf("%d",&temp.price);

books[bookcount]=temp; 
printf("\n ** Successfully Entered a book!! **\n");
bookcount++;

 }


void search(int booknumber){

for(int i=0;i<=bookcount;i++){

if(books[i].bid==booknumber){

	printf("Book found!  Id: %d | Name: %s | Author: %s | Price: Rs %d\n", books[i].bid,books[i].name,books[i].author,books[i].price);

	return;
}
	printf("No Books Found! :( \n");

}

}

void showall(){
	if(bookcount>0){

for(int i=0;i<bookcount;i++){
printf("[%d] Id: %d | Name: %s | Author: %s | Price: Rs %d \n", i+1,books[i].bid,books[i].name,books[i].author,books[i].price);
}

	}else{

	printf("No books to show\n");

}
}


int main() {
int a=10;
while(a!=0){
	printf("\n **********************\n");
	printf("Enter an option: \n");
	printf("1: Show all books\n");
	printf("2: Add a book\n");
	printf("3: Search a book\n");
	printf("0: EXIT\n");
	scanf("%d",&a);
	switch(a){
	case 1: 
		showall();
		break;
	case 2:
		add();
		break;
	case 3:
		printf("Enter the id of the book to search\n");
		int id;
		scanf("%d",&id);
		search(id);
		break;
	default: 
		break;

	}


}



printf("Good Bye!!!! :) \n");
}
