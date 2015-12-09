#include<stdio.h>
#include<stdlib.h>
int arre[5];
int i;
int numeros;
int aux;
int valormaximo;
int aux2;
int j;
int ji;

int main()
{
  printf("PROGRAMA  QUE CALCULA LA M O D A  \n ");  
  
               for(i=0;   i<5;    i++){
                   printf("INGRESE EL  NUMERO %d \n ",i);
                              scanf("%d",&arre[i]);
                                       }
                                  valormaximo=0;
                                
                           for(j=0; j<5;  j++){
                                   aux=0;
                                     for(i=0;   i<5;    i++){
  
                                                  if(arre[j]==arre[i]){
                                                    aux=aux+1; 
                                                    ji=arre[i];
                                                           }
                                                        }
                                               
                                                if(valormaximo<aux)
                                                 {
                                                 valormaximo=aux;
                                                 aux2=ji;      
                                               } 
                                                    
                                                                    }   
                                               
                                               
  printf("EL NUMERO QUE SE REPITE MAS VECES  ES -->>:  %d",aux2);
  printf(" Y SE REPITE  -->> %d",valormaximo);                                                
    
system("pause");
    }
