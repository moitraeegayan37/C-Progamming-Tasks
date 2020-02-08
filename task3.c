#include <stdio.h>

int main()
{
   int marks[3], n, i, sum = 0;
    printf("Enter the number of subjects to be entered : ");
    scanf("%d", &n);
	for (i=0; i<n;i++)
    {
        printf("Enter marks of subject no. %d : ", i + 1);
        scanf("%d", &marks[i]);
        sum =sum + marks[i];
    }
	printf("\nThe sum  : %d", sum);
    printf("\nThe average : %0.2f", (float)sum / n);
	 return 0;
}
