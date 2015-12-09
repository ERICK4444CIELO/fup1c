#include<stdio.h>

int i;
int j;
int final;

int main()
{
	
	printf("Programa que repite numeros pares \n");
	printf("Dame un numero");
	scanf("%d",&final);
	while (i <= final)
	{
		j=1;
		do
		{
			printf("\n %d ",i);
			j++;
		}while ((j <= i) && (i % 2 == 0));
		i++;
		
	}
	system("pause");
}
