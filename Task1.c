#include<stdio.h>
struct student{
 char name[30];
 char age[3];
 char phone[11];	
};
main()
{
	int choice=0;
	struct student stud1;
	printf("Chose an option: \n 1.Enter the info \n 2.Quit\n");
	scanf("%d",&choice);
	if(choice==1)
		{
		printf("\n 1.Enter the name of the student:  ");
		scanf("%s",&stud1.name);
		printf("\n 2.Enter the age of the student:  ");
		scanf("%s",&stud1.age);
		printf("\n 3.Enter the Phone number of the student:  ");
		scanf("%s",&stud1.phone);
		printf("The info of the student is:  \n 1.Name: %s  \n 2.Age: %s  \n 3.Phone: %s ",stud1.name,stud1.age,stud1.phone);
}	
else if(choice==2)
	{
		exit(0);
	}
	else 
	{
		printf("Invalid");
	}
}
