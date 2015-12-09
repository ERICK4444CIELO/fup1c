#include<stdio.h>
#include<stdlib.h>
int i;
int valor;
int suma;
int main()



{
	
	
	i=1;
		printf("    ingrese  el valor    \n ");
	 	scanf("%d",&valor);
		
	while(i<=valor){
		
	suma=suma+i;

	printf("   valor de  i   %d",i);	
		

	i=i+1;	
		
		
	}
	printf("    resultado  %d ",suma);
	
		system("pause");
}
