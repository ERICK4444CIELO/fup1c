#include<stdio.h>
#include<stdlib.h>

int nunc;
int nund;
int nuns;
int nunr;
int nunp;
int pantotal;
int reftotal;
int sabtotal;
int dettotal;
int caftotal;
int opc;
int total;
int totalventas;
int eleccion;

int  main()
{
  printf("ingrese  la  opcion  1---> compras  2--->ganancias   ");
  scanf("%d",&eleccion);
	
switch(eleccion)  
{
              case 1:{
                   printf("elegiste  compras \n  ahora  ingrese  la  opcion de tu producto\n   ");
                   printf("1-->cafe $10\n  2-->detergente $20\n 3-->sabritas $10\n 4-->refrescos $15\n 5-->pan $15\n    ");
                      scanf("%d",&opc);
                      switch(opc){
                                  case 1:{
                                       printf("elegiste  cafe  cuantos  ???  \n   ");
                                       scanf("%d",nunc);
                                       caftotal=nunc*10;
                                         }break;
                                  case 2:{
                                        printf("elegiste  detergentes   cuantos  ???  \n   ");
                                       scanf("%d",nund);
                                       dettotal=nund*20;
                                         }break;
                                  case 3:{
                                        printf("elegiste  sabritas  cuantos  ???  \n   ");
                                       scanf("%d",nuns);
                                       sabtotal=nuns*10;
                                         }break;
                                  case 4:{
                                       printf("elegiste REFRESCOS  cuantos  ???  \n   ");
                                       scanf("%d",nunr);
                                       reftotal=nuns*20;
                                         }break;
                                  case 5:{
                                       printf("elegiste  pan  cuantos  ???  \n   ");
                                       scanf("%d",nunp);
                                       pantotal=nunp*15;
                                         }break;
                                        totalventas=caftotal+dettotal+sabtotal+ reftotal+ pantotal;
                                  default:{
                                         printf("  solo  opciones  1,2,3,4,5   ");
                                          }   
                                  }
                                      
                                    
                      }break;
              case 2:{
                   printf("elegiste   ver tus  ganancias   ");
                   total=500+totalventas;
                   printf("  $   %d ",&total);
                   
                     }break;
                       
                  
                  
                  
                  
                  
                  
         default :{printf("  solo  opciones  1 y 2   ");
                    }
                                  
} 
     
     
     
     
     
     
     system("pause");
}
