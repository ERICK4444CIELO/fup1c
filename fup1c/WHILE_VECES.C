#include<stdio.h>
#include<stdlib.h>

int i=1;
int numero;
int j;

int main()



{
	
printf("  PROGRAMA  QUE IMPRIME NUMEROS  PETITIVOS  \n   ");	
	
	printf("   INGRESE  UN NUMERO      ");
	scanf("\n%d",&numero);
			
	
	
	while(i<=numero){
	
 
	              j=1;       
	         while(j<=i){
	
                 printf("   %d",i,"   ");
	                     
		           j=j+1;
                         }
                         printf("\n");
	i=i+1;	
	}

	
		system("pause");
}
