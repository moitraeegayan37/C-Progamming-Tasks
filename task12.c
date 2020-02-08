#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Pick your choice: \n1 1.Celcius to fahrenheit \n2 2.Fahrenheit to celcius \n3 3.Exit \n");
	int choice=0;
	scanf("%d", &choice);
		switch(choice)
	{
		case 1: 
   	printf("Enter the temperature in celsius:");
  	scanf("%f",&celsius);
  	fahrenheit=celsius*9/5+32;
 	printf("%.3f Celsius = %.3f Fahrenheit",celsius,fahrenheit);
 	break;
	
	case 2: 
   	 printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
     celsius=(fahrenheit - 32)*5/9;
    printf("\nCelsius = %.3f",celsius); 
 	break;
 	
    case 3:
      exit(0);
    
    default: printf("Your choice is invalid");
}
 }

 	
	
