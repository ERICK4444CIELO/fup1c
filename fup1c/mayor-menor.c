#include<stdio.h>
#include<stdlib.h>



int w;
int x;
int incremento;
int  vector[20];
int main()
{
	printf("DE MAYOR A MENOR\n  ");
   printf("INGRESE LOS NUMEROS\n  ");
   
   
    for(x=0; x<20; x=x+1)
    {
     printf("numero num %d\n   ",x);
     scanf("%d",&vector[x]);
             
     }
          
          
          
          for(x=0;   x<20; x=x+1)
          {
              incremento=incremento+1; 
              for(w=incremento;  w<20;  w=w+1)
                                           {
                          if(vector[x]<vector[w]){
                              mayor=vector[x];
                              vector[x]=vector[w];
                              vector[w]=mayor;
                                              
                                              }
                   } 
               
               }
          
     
       for(x=0; x<20;  x=x+1)
       {
                printf("%d\n",vector[x]);
                
             } 
          
          
          system("pause");
          }

