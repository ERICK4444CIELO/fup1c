#include<stdio.h>/*PROGRAMA  2
  */
int nu;
int nd;
int resultados; 
int resultador; 
int resultadom; 
float resultadod; 
int  main()

{
	    printf("INGRESE  EL  NUMERO   1   PARA LA OPERACIÓN  ");
	        scanf("%d",&nu);
	
		printf("INGRESE  EL  NUMERO   2  PARA LA OPERACIÓN  ");
	        scanf("%d",&nd);
	        
	    resultados=nu+nd;
	     resultador=nu-nd;
	      resultadom=nu*nd;
	       resultadod=(float)nu/nd;
	       
		printf("TU RESULTADO DE LA SUMA ES  %d   + %d  es %d\n",nu,nd,resultados);   
			printf("TU RESULTADO DE LA RESTA ES  %d   - %d  es %d\n",nu,nd,resultador);  
				printf("TU RESULTADO DE LA MULTIPLICACIÓN   ES  %d   * %d  es %d\n",nu,nd,resultadom);  
					printf("TU RESULTADO DE LA DIVISIÓN ES  %d   / %d  es %f\n",nu,nd,resultadod);  
		system("pause");
		 
	
}
