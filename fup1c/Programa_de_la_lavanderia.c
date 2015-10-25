#include <stdio.h>
#include <stdlib.h>

int kilos;
int menu;


int main ()
{
	printf("ingresa los kilos de ropa a lavar\n");
	scanf("%d", &kilos);
	if (kilos >= 0 && kilos<= 10)
	{
		printf("El nivel de agua es minimo\n");
	}
	if (kilos >= 11 && kilos<= 15)
	{
		printf("el nivel de agua es medio\n");
	}
	if (kilos >= 16 && kilos<= 20)
	{
		printf("El nivel de agua es maximo\n");
	}
	else (kilos >= 20)
	{
		printf("Ya no se lava");
	}
	printf("Que tipo de ropa vas a lavar?\n");
	printf("Presione 1 si es delicada\n");
	printf("Presione 2 si es normal\n");
	printf("Presione 3 si es sucia\n");
	scanf("%d",&menu);
	switch (menu)
	{
		case 1:
			{
				printf("Su ropa es delicada, se va a lavar 5 minutos\n");
			}break;
		case 2:
			{
				printf("Su ropa es normal, se va a lavar 10 minutos\n");
			}break;
		case 3:
			{
				printf("Su ropa es sucia, se va a lavar 30 minutos\n");
			}
	}
}
























