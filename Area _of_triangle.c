//area =sqrt(s* (s-a)*(s-b)*(s-c)
//s=(a+b+c)
#include <stdio.h>
#include<math.h>

int main() 
{
    float a,b,c,s,area;
    printf("Enter 3 value=");
    scanf("%f%f%f",&a,&b,&c);
    
    s=(a+b+c/2);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is=%f",area);

    return 0;
}
