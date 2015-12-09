#include<stdio.h>
#include<stdlib.h>

int i;
int num;
int residuo;
int cosiente;
int main()



{
 	printf("  PROGRAMA QUE  DESCOMPONE NUMEROS  \n   ");
     
   
                      
         	  printf("  INGRESE UN NUMERO  X  \n   ");	
	          scanf("\n%d",&num);
	          
                  do{
	    
		            residuo=num%10;
	            	cosiente=num/10;
	            	printf("\n %d",residuo);
		            num=cosiente;
		            
	
		            
                    }while(num != 0);
                    	
                   
              
             
              
system("pause");
}
