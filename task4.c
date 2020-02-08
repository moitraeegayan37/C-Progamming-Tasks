#include<stdio.h>
main()
{
char firstname[20];
char secondname[20];
printf("Enter the firstname: ");
scanf("%s",&firstname);
printf("Enter the secondname: ");
scanf("%s",&secondname);
strcat(firstname,secondname);
printf("The fullname is %s ",firstname);
}
