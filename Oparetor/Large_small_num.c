
#include<stdio.h>

int main()
{
    float num1,num2;
    printf("Enter two numbers=");
    scanf("%f%f",&num1,&num2);
    
    if(num1>num2)
    {
      printf("Large number =%.1f\n",num1);
      printf("Small number =%.1f",num2);
    }
    else if(num2>num1)
    {
      printf("Large number =%.1f\n",num2); 
      printf("Small number =%.1f",num1); 
    }
    else
      printf("Equal");
      
    return 0;
}
