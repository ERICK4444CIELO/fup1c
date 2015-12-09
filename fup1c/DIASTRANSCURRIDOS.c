#include<stdio.h>
#include<stdlib.h>
int au;
int sumax;
int dia1;
int mes1;
int i;
int aux2;
int aux;
int dias;
int diasm;
int dia2;
int mes2;
int sumam;
int j;
int res;
int res1;
int res2;
int main()

{
printf("ingrese  el dia  del rango inicial ");
scanf("%d",&dia1);
printf("ingrese el mes del rango  inicial \n  1>>ENERO  \n 2>>FEBRERO \n3>>MARZO  \n4>>ABRIL  \n5>>MAYO  \n6>>JUNIO  \n ");
printf("7>>JULIO \n8>>AGOSTO  \n9>>SEPTIEMBRE  \n10>>OCTUBRE  11>>NOVIEMBRE \n12>>DICIEMBRE  \n");

scanf("%d",&mes1);
printf("ingrese  el dia  del rango final ");
scanf("%d",&dia2);


printf("ingrese el mes del rango  final \n  1>>ENERO  \n 2>>FEBRERO \n3>>MARZO  \n4>>ABRIL  \n5>>MAYO  \n6>>JUNIO  \n ");
printf("7>>JULIO \n8>>AGOSTO  \n9>>SEPTIEMBRE  \n10>>OCTUBRE  11>>NOVIEMBRE \n12>>DICIEMBRE  \n");
scanf("%d",&mes2);
if(mes1<mes2){
   for(i=mes1;   i<=mes2;  i++)	
    {

      sumam=sumam+1;
	
      }
	dias=30-dia2;
    diasm=sumam*30;

         aux=(diasm-dia1)-dias;	
        printf(" LOS  DIAS TRANCURRIDOS FUERON  :   %d",aux);
        }else{}	


     if(mes1>mes2){
              
              for (j=mes1;  j>=mes2;   j--){
                    sumax=sumax+1;
                    au=12-sumax;
                    
                    aux2=((au*30)-dia1+dia2);
                    
                                         }
                   printf(" LOS  DIAS TRANCURRIDOS FUERON  :   %d",aux2);
              }else{
                             
                                       
                    }
    /* if(mes1=mes2)&(dia1=dia2){
                                  res=(12*30);     printf("LOS  DIAS TRANCURRIDOS FUERON  \n%d",res);  }         
  
    if(mes1=mes2)&&(dia1<dia2){
   
                    res1=360-(dia2-dia1);    
                     printf("LOS  DIAS TRANCURRIDOS FUERON  \n%d",res1);  
                     }
      if(mes1=mes2)&&(dia1>dia2){
   
                    res2=360-(dia1-dia2);    
                     printf("LOS  DIAS TRANCURRIDOS FUERON  \n%d",res2);  
                     }               
                */
                
                                
system("pause");

}
