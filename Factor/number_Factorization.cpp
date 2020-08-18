#include<stdio.h>
int main() 
{
	int x, i = 2, k = 0;
	printf("Enter number : ");
	scanf_s("%d", &x);
	printf("Factoring Result : ");
	while (x != 1)
	{
		while (x%i == 0)
		{
			printf("%d", i);
			x /= i;
			if (x!=1)
			{
				printf(" x ");
			}
		}
		i++;
	}
	return 0;
}