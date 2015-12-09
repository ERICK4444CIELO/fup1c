
#include<stdio.h>
#include<stdlib.h>
int suma;
int aux;
int n;
int i;
int j;
int main()

{

suma=0;

printf("  INGRESE  EL NUMERO FINAL..PARA  SUMAR LOS PARES    \n   ");	
scanf("\n%d",&n);

for (i=0; i<=n;  i=i+2)	{
				  suma=suma+i;
                    
}     
 
printf("   \n %d",suma);
 system("pause");                   
}
