#include <stdio.h>
struct book{
	int pages;
	char title[60];
	char author[60];
	float price;
};

typedef struct book Book;

void input(Book *ptr){
	printf("Enter Title: ");
	getchar();
	gets(ptr->title);
	printf("Enter Author Name: ");
	getchar();
	gets(ptr->author);
	printf("Enter number of pages: ");
	scanf("%d",&ptr->pages);
	printf("Enter the price of the book: ");
	scanf("%f",&ptr->price);
}

int main(){
	Book s[10];
	Book* ptr = &s[0];
	int i,n;
	printf("How many books data is to be entered: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
	printf("\nEnter information of %d book\n\n",i+1);
	input(ptr+i);}
	
	printf("\n\n\nInformation of the books: ");
	
	for (i=0;i<n;i++){
		printf("\n%s written by %s has %d pages and is of Rs.%.2f",s[i].title,s[i].author,s[i].pages,s[i].price);
	}
	return 0;
}
