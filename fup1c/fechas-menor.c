#include<stdio.h>
#include<stdlib.h>

int arreglo[10];
int i;
int menor = 0;
int j;
int masPeque=-10000;


int main()
{
	for(i = 0; i < 10; i++);
	{
		printf("dame un numero\n");
		scanf("%d",&arreglo[i]);
	}
	for(j = 0; j < 2; j++)
	{
		menor = 60000;
	    for(i = 0;i<10;i++)
	    {
	    
		if(arreglo[i] > menor && arreglo[i] < masPeque)
		{
			menor = arreglo[i];
		}
	}
	printf("el numero mayor es: %d\n",menor);
	masPeque = menor;
	

	
	
	system ("pause");

}
}
