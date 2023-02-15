#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=2,z=3,*px=&x,*py=&y,*pz=&z,temp;
    printf("%d %d %d %d %d %d %d %d %d\n",x, y, z, px, py, pz, *px, *py, *pz);
    //expected behavior: prints 1 2 3 value of px py pz 1 2 3
    printf("Swapping pointers...\n");
    temp = pz;
    pz = px;
    px = py;
    py = temp;
    printf("%d %d %d %d %d %d %d %d %d\n",x, y, z, px, py, pz, *px, *py, *pz);
    //expected behavior: prints 1 2 3 OLD value of py pz px 2 3 1
    return 0;
}
