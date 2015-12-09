#include<stdio.h>
#include<stdlib.h>

int i=1;
int numero;
int suma;
float promedio;

int main()



{
	
printf("  PROGRAMA  QUE CALCULA  PROMEDIO DE 10 NUMEROS \n   ");	
	/*i=1;*/
		
	
	 suma=0;	
	while(i<=10){
	
	printf("   INGRESE EL NUMERO      %d ",i,"   ");
	scanf("\n%d",&numero);
		
	suma=suma+numero;
    promedio=(float)suma/10;
    
	
		

	i=i+1;	
		
		
	}
	printf(" RESULTADO DEL PROMEDIO    es %f",promedio,"  ");
	
		system("pause");
}
