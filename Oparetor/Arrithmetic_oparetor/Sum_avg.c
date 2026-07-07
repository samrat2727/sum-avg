#include <stdio.h>
int main()
{
    int a, b, sum;
    float avg;

    printf("the two numbers are=");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("the sum is=%d\n", sum);

    avg = (float)sum / 2;
    printf("the avg is=%.2f", avg);

    return 0;
}
