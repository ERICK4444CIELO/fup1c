#include<stdio.h>
#include<stdlib.h>

int dia1;
int mes1;
int i;
int aux;
int dias;
int diasm;
int dia2;
int mes2;
int sumam;

int main()

{
printf("ingrese  el dia  del rango inicial ");
scanf("%d",&dia1);
printf("ingrese el mes del rango  inicial \n  1>>ENERO  \n 2>>FEBRERO \n3>>MARZO  \n4>>ABRIL  \n5>>MAYO  \n6>>JUNIO  \n ");
printf("7>>JULIO \n8>>AGOSTO  \n9>>SEPTIEMBRE  \n10>>NOVIEMBRE \n11>>DICIEMBRE  \n");

scanf("%d",&mes1);
printf("ingrese  el dia  del rango final ");
scanf("%d",&dia2);


printf("ingrese el mes del rango  final \n  1>>ENERO  \n 2>>FEBRERO \n3>>MARZO  \n4>>ABRIL  \n5>>MAYO  \n6>>JUNIO  \n ");
printf("7>>JULIO \n8>>AGOSTO  \n9>>SEPTIEMBRE  \n10>>NOVIEMBRE \n11>>DICIEMBRE  \n");
scanf("%d",&mes2);
for(i=mes1;   i<=mes2;  i++)	
{

sumam=sumam+1;
	
}
	dias=30-dia2;
    diasm=sumam*30;

aux=(diasm-dia1)-dias;	
printf(" LOS  DIAS TRANCURRIDOS FUERON  :   %d",aux);	
system("pause");

}
