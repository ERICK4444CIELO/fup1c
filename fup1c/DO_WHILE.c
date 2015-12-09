#include<stdio.h>
#include<stdlib.h>
int i;
int j;
int numero;

int main()

{
	printf("INGRESE   EL LIMITE  ");
	scanf("%d",&numero);
	   while(i<=numero){
		j=1;
		do{
		   printf("\n%d",i);
		   j=j+1;
		   

           }while((j<=i)&&(i%2==0));
		
		
     	i=i+1;	
    	}

	
	
	system("pause");
}


