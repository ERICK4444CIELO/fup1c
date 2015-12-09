#include<stdlib.h>
#include<stdio.h>
int mdia; 
int mnoche;
int mpozo;
int aux;
int fuera;
char resp;
int main()

{

do{
aux=0;
fuera=0;
             printf("INGRESEA  LA PROFUNDIDAD DEL POZO  --->>>>>");
             scanf("\n%d",&mpozo);
             printf("INGRESEA  LOS METROS QUE  AVANZA  EN EL DIA  --->>>>>");
             scanf("\n%d",&mdia);
             printf("INGRESEA  LOS METROS QUE  RETROCEDE EN LA NOCHE  --->>>>>");
             scanf("\n%d",&mnoche);
             
             if(mdia>=mpozo){
            	printf("EL CANGREJO  SALDRA EN  EL PRIMER DIA");
			                } 
			                else{
			                	if(mnoche>=mdia){printf(" NUNCA  SALDRA   EL CANGREJO POR  CARACOL \n");}     
							}
            if(mdia>mnoche) {
           do{ 
                aux=aux+mdia-mnoche; 

                 fuera++; 
                  if(aux>=mpozo)
                           {fuera=fuera-1;
                                   } 
             }while(mpozo>=aux); 
              printf("DIAS EN SALIR  DEL POZO-> %d",fuera);
                           }
                           
                      
                           

printf("     DESEAS PREGUNTAR  OTRA  VEZ ?   SI-->> S  NO-->> N \n ");
scanf("\n%c",&resp);
}while(resp!='n');

printf("   GOOD  BYE  ");
system("pause");

}
