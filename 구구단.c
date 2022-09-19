#include <stdio.h>

void main(void) {
	
	/*
	for (int i = 2; i <=9; i++)
	{
		printf("%d단\n", i);
		for (int j = 1; j <=9 ; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	*/

	int a;

	printf("단을 입력 : ");
	scanf("%d", &a);

	printf("\n%d단\n",a);

	for (int i = 1; i <=9; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}
}