#include<stdio.h>
#include<stdlib.h>
int arreglo[10];
int i;
int calif;
int suma;
int prom;



int main()


 {
    for(i=0; i<10;  i++){
    	printf("INGRESE CALIFICACION  %d",i);
    	scanf("%d",&arreglo[i]);
     	
 	suma=suma+arreglo[i];
 	
             }
			 
			 
prom=suma/10;
			 	
printf("TU PROMEDIO   ES  : \n %d",prom);
 
   
  
 	system("pause");
 	
  } 
