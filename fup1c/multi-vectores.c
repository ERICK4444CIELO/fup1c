#include<stdio.h>8
#include<stdlib.h>


int i;
int j;
int vect1[10];
int vect2[10];
int vect3[10];


int main()
{
 	printf("DAME LOS PRIMEROS 10 NUMEROS QUE VAS A MULTIPLICAR %d \n\n");
 	
 	
    for(i=0;i<10;i++){
    	
    	scanf("%d",&vect1[i]);
     	}
     	
        printf("DAME LOS OTROS 10 NUMEROS DEL ARREGLO PARA MILTIPLICAR \n\n");
    
	for(j=0;j<10;j++){
    
    	scanf("%d",&vect2[j]);
     	
             }
             
             printf("EL RESULTADO DE LAS MULTIPLICACIONES SON \n\n");
             
			  for(i=0;i<10;i++){
    	
     	             for(j=0;j<10;j++){
                                      
    	                              vect3[j]=vect1[i]*vect2[j];
    	                              printf("%d\n",vect3[j]);
     	
		  }
                                      printf("\n\n");
                                       
                                       
                                       
                                  }
             

  } 

