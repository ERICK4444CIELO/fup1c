

#include<stdio.h>
#include<stdlib.h>

int prod1;
int prod2;
int prod3;
int prod4;
int prod5;
int donas1;
int refres2;
int droga3;
int cigarros4;
int alcohol5;
int eleg;
int total;
int totales;
int elegir;

int  main()
{
  printf("ingresa    1    si quieres comprar o ingresa    2    si quieres ver ganancias\n");
  scanf("%d",&elegir);
	
switch(elegir)  
{
              case 1:{
                   printf("  elegiste  comprar \nentonces ingresa  la  opcion del producto que quieres\n");
                   printf("  1 -- donas $10\n  2 -- refresco $20\n  3 -- drogas  $50\n  4 -- cigarros $15\n  5 -- alcohol $15\n");
                      scanf("%d",&eleg);
                      switch(eleg){
                                  case 1:{
                                       printf("¿cuantas donas quieres?\n   ");
                                       scanf("%d",&prod1);
                                       donas1=prod1*10;
                                       printf("tienes que pagar  $%d\n pd: se aceptan tarjetas de credito\n",donas1);
                                         }break;
                                  case 2:{
                                        printf("¿cuantos refrescos quieres?  \n   ");
                                       scanf("%d",&prod2);
                                       refres2=prod2*20;
                                       printf("tienes que pagar  $%d\n pd: se aceptan tarjetas de credito\n",refres2);
                                         }break;
                                  case 3:{
                                        printf("¿cuantos toques quieres?\n   ");
                                       scanf("%d",&prod3);
                                       droga3=prod3*50;
                                       printf("tienes que pagar  $%d\n pd: se aceptan tarjetas de credito\n",droga3 );
                                         }break;
                                  case 4:{
                                       printf("¿cuantos cigarros quieres?  \n   ");
                                       scanf("%d",&prod4);
                                       cigarros4=prod4*15;
                                       printf("tienes que pagar  $%d\n pd: se aceptan tarjetas de credito\n",cigarros4);
                                         }break;
                                  case 5:{
                                       printf("¿cuantas chelas quieres?\n   ");
                                       scanf("%d",&prod5);
                                       alcohol5=prod5*15;
                                       printf("tienes que pagar  $%d\n pd: se aceptan tarjetas de credito\n",alcohol5);
                                         }break;
                                        
                                  default:{
                                         printf("error no escogiste ningun numero valido\n");
                                          }   
                                  }
                                      
                                    
                      }break;
              case 2:{
                   printf("elegiste   ver las  ganancias\n ");
                   total=99999999+totales;
                   printf(" $%d\n",total);
                   
                     }break;
                       
                  
                  
                  
                  
                  
                  
         default :{printf("error no escogiste ningun numero valido\n");
                    }
                                  
} 
     
     
     
    
     
     
     system("pause");
}
