#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, *p = &a;
    printf("%d\n",a);
    *p = 20;
    printf("%d\n",a);
    return 0;
}
