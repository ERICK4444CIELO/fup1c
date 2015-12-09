#include<stdio.h>
#include<stdlib.h>

int i;
int j;
int filas;
int columnas;
int identidad[1][1];
int matris[2][2];

int main()
{
	for(i=0;i<filas;i++)
	{
		
		for(j=0;j<columnas;j++)
		{
			printf("matriz[%d][%d]",i+1,j+1);
			scanf("%d",identidad[i][j]);
			printf("%d ",identidad[i][j]);
		}
	}
	printf("la matriz es...");
	for(i=0;i<filas;i++)
	{
		
		for(j=0;j<columnas;j++)
		{
			
			printf("%d ",identidad[i][j]);
		}
	}
	
	printf("\n");
}
//hacer matriz que pida escalar y matriz de 3x3, muestre la matriz inicial y muestre la matriz resultante 

