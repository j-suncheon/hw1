#include <stdio.h>

void main(void) {

	int k = 3;
	int l = 1;

	for (int a = 1; a <=3 ; a++)
	{

		for (int i = k; i >= 0; i--)
		{
			printf(" ");
		}
		for (int j = l; j <=7 && j>=1; j -=1)
		{

				printf("*");
		}
			printf("\n");
			k--;
			l += 2;
	}

	int y = 0;
	int u =7;

	for (int a = 1; a <=4 ; a++)
	{

		for (int i = y; i >= 0; i--)
		{
			printf(" ");
		}
		for (int j = u; j <=7 && j>=1; j -=1)
		{

				printf("*");
		}
			printf("\n");
			y++;
			u -= 2;
	}
}