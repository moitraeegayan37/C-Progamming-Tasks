#include<stdio.h>
struct book{
	char title[40];
	char author[40];
	char genre[40];
};
main(){

struct book c1;
printf("Enter the title name: ");
scanf("%s",&c1.title);
printf("Enter the author name: ");
scanf("%s",&c1.author);
printf("Enter the genre: ");
scanf("%s",&c1.genre);
printf("Displaying the information: \n");
printf("Title: ");
printf("%s",&c1.title);
printf("\nAuthor:  ");
printf("%s",&c1.author);
printf("\nGenre: ");
printf("%s",&c1.genre);
return 0;
}
