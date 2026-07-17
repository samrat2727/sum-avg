#include <stdio.h>
int main()  
{
int choice;
float temp,convertedTemp;
  
     printf("Temperature conversion menu\n");
     printf("1.Fahrenheit to celcius\n");
     printf("2.Celcius to farhenhite\n");
     printf("Enter your choice=");
     scanf("%d",&choice);

switch(choice)
{
 case 1:
 {
      printf("Enter the Fahernhite temperature:");
      scanf("%f",&temp);
      convertedTemp=(temp-32)/1.8;
      printf("The temperature in Celcius is =%f\n",convertedTemp);
    break; 
 }
  case 2:  
    { 
       printf("Enter the Celcius temperature:");
       scanf("%f",&temp);
       convertedTemp=(1.8*temp)+32;
       printf("The temperature in Fahernhite is =%f\n",convertedTemp);
    }   
        
   default:    
       printf("Not a correct option");
    
}
 
    return 0;
}
