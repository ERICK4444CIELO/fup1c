
#include<stdio.h>
#include<stdlib.h>
int aux;
int mcaido;
int mdia;
int mnoche;
int sale;
int salida;
int i;
int au;
int main()
{
	printf("ingresa  la profundidad  que se cayo  el playero-----");
	scanf("%d",&mcaido);
	
	printf("ingresa  los metros que avanza de dia------ ");
	scanf("%d",&mdia);
	
	printf("ingresa los metros que retorcede  de noche------ ");
	scanf("%d",&mnoche);
	if(mdia>mnoche){
	      au=0;
	     aux=0;
	     sale=0;
	     while(mcaido>=sale)
	         {
                  
                
                  
		     sale=sale+mdia-mnoche;
		    
             
	         salida=salida+1;
		            if(sale>=mcaido)
                           {salida=salida-1;
                                   } 
		     
		     }
	         printf(" el cangrejo salio en  --->>:%d dias \n",salida);
	
             }
if(mnoche>mdia){
	printf("no ssaldra  nunca   ");
	}
	
	system("pause");
}

//porgrama que me diga de un arreglo por ejemplo 6,7,2,1,8,3 que e numero mayor es 8 y el que le sigue es 7 
