// area of rectangle =length*width
#include <stdio.h>

int main() {
    float width,length,area;
    
    printf("Enter width=");
    scanf("%f",&width);
    
    printf("Enter length=");
    scanf("%f",&length);
    
    area=width*length;
    printf("the area is =%.2f",area);

    return 0;
}
