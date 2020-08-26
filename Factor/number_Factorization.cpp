#include<stdio.h>
int main() 
{
	int a, i = 2;
	printf("Enter number : ");
	scanf_s("%d", &a);
	printf("Factoring Result : ");
	while (a != 1)
	{
		while (a%i == 0)
		{
			printf("%d", i);
			a /= i;
			if (a!=1)
			{
				printf(" x ");
			}
		}
		i++;
	}
	return 0;
}