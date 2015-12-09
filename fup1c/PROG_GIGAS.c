# include<stdio.h>
int megas;
float bits;
float bytes;
float kilobytes;

float gigabytes;


float terabytes;



int main()


{
 printf("INGRESE  EL NUMERO DE MEGAS  PARA LA CONVERSIÓN  ");
	        scanf("%d",&megas);
	
	    bits=(float)((megas*1024)*1024)*8;
	     bytes=(float)((megas*1024)*1024);
	 
	      kilobytes=(float)megas*1024;
	      gigabytes=(float)(megas/1024);
	       
	       terabytes=(float)((megas/1024)/1024);
	       
		printf("TU RESULTADO DE LOS  BITSS ES   %f\n",bits);   
			printf("TU RESULTADO DE LOS  BYTES ES   %f\n",bytes);
				printf("TU RESULTADO DE LOS  kilobytes ES   %f\n",kilobytes);   
					printf("TU RESULTADO DE LOS  gigabytes ES   %f\n",gigabytes);      
			
				printf("TU RESULTADO DE LOS  terabytes ES   %f\n",terabytes);      
			
			
		
		system("pause");	
	
	
}
