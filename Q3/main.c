#include <stdio.h>
#include <stdlib.h>
#define N = 100;
int main()
{
    int n,i;
    printf("What is the size of your array?\n");
    scanf("%d",&n);

    int a[N],b[N];
    printf("Enter the elements of first array:\n");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);}
    printf("Enter the elements of second array:\n");
        for(i=0;i<n;i++){
            scanf("%d",&b[i]);}

    printf("The scalar product is\n%d\n", scalar(a,b,n));
    return 0;
}
int scalar(int *a, int *b, int n)
{
    int j,res=0;
    for(j=0;j<n;j++)
        res = res + (*(a+j)) * (*(b+j));
    return(res);
}
