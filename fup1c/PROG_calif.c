#include<stdio.h>
#include<stdlib.h>

int calif;

 int main()
 
 {
 	printf("programa  que  te dice si aprovaste o no  ");
 	printf("  introduce  la calificacion    ");	
 	scanf("%d",&calif);
 	
 	   if(calif>=7){
 	   	    printf(" aprovado\n"); 
		}
     	else{
 	     	    printf(" reprovado\n"); 
	   }
 	


 
 			printf(" tu calificacion  es   %d\n ",calif);
 	   system("pause");
 }
