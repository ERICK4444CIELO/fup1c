#include<stdio.h>
#include<stdlib.h>





int increm;
int vector[20];
int mayor;
int i;
int j;

int main()
{
	
   printf("INGRESE 20 NUMEROS PARA ORDENARLOS DE MAYOR A MENOR\n\n  ");
   
   
    for(i=0; i<20; i++)
    {
    	printf("numero %d\n\n\n",i);
     
     scanf("%d",&vector[i]);
             
     }
          
          
          
          for(i=0; i<20; i++)
          {
              increm=increm+1; 
              for(j=increm; j<20; j++)
                                           {
                          if(vector[i]<vector[j]){
                              mayor=vector[i];
                              vector[i]=vector[j];
                              vector[j]=mayor;
                                              
                                              }
                   } 
               
               }
          
     
       for(i=0; i<20; i++)
       {
       	
       	
                printf("\n\n%d",vector[i]);
                
             } 
          
          
          system("pause");
          }

