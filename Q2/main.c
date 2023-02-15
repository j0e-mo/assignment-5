#include <stdio.h>
#include <stdlib.h>
int sum;
int main()
{
    int a,b;
    printf("Give me two numbers:\n");
    scanf("%d %d",&a,&b);
    SUM(&a,&b);
    printf("Sum is %d:\n",sum);
    return 0;
}
int SUM(int *pa, int *pb)
{
    sum = *pa + * pb;
    return sum;
}
