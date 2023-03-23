#include <stdio.h>
#include <stdlib.h>
void b_alg(int *arr);
int main()
{
	//رأس السؤال ذكر أن الأوبيريشن تتم على هذه ال5 أرقام
	int arr[] = {6, 3, 9, 15, 2}, i;
	b_alg(arr);
	printf("Array after bubble algorithm: \n");
	for (i=0;i<5;i++)
		printf("%d\t", arr[i]);
	return 0;
}

void b_alg(int *arr)
{
	int i, j,temp;
	for (i=0;i<4;i++)
		for (j=0; j<4-i;j++)
			if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
            }
}

