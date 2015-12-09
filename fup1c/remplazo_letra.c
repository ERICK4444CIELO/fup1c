#include<stdio.h>
#include<stdlib.h>
int cont;  
char buscar;
char reemplazar;
int  i;
char c;
char nombre[50];
	
int main()


{


			
c='\0';	
i=0;

           
        printf("ingrese  el nombre   ");

           while(c!='\n'){

               scanf("%c",&c);
               nombre[i]=c;
               i++;
             } /*nombre[i]='\0';*/
             
             cont=i;
          
            /* for(i=0; i<=cont;  i++)
              {
                   printf("%c",nombre[i]);
                   
              }*/
               printf("ingresa la  letra a  buscar  ");  
	           scanf(" %c",&buscar);
	           printf("ingresa la  letra a  reeemplazar ");  
               scanf(" %c",&reemplazar);
            
	        for(i=0; i<=cont;  i++)
              {
                   if(nombre[i]==buscar)
                   {
                     nombre[i]=reemplazar;
                       }
                   
              }
              printf("%s",nombre);
	         /* for(i=0; i<=cont;  i++)
              {
                 
                    printf("\n%c",nombre[i]);
                      
                   
              }*/
	        
system("pause");
}

