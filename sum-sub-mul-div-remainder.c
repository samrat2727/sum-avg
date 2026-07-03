#include <stdio.h>

int main() {
    int a,b,result;
    printf("Enter two numbers=");
    scanf("%d %d",&a,&b);
result=a+b;
    printf("sum=%d\n",result);
result=a-b;
    printf("sub=%d\n",result);
result=a/b;
    printf("div=%d\n",result);
result=a*b;
    printf("mul=%d\n",result);
result=a%b;
printf("remainder=%d\n",result);
    return 0;
}
