#include<stdio.h>
#include<stdlib.h>

int  arre[10];
int i;
int mayor;
int mayor1;
int pos;
int pos1;
int main()
{
	printf(" MAYOR Y EL QUE LE SIGUE  ");
   
    for(i=0; i<10; i++)
    {
             printf("numero  %d\n   ",i);
             scanf("%d",&arre[i]);
             
          }
          
         mayor=0; 
    
      for(i=0; i<10; i++)
    {
             if(arre[i]>mayor){
                               mayor=arre[i];
                               pos=i;
                               }
             
          }
          
            printf("el mayor  es :  %d \n",mayor);
    printf("en la posicion  %d\n",pos);
          
          arre[pos]=arre[9];
          arre[9]=mayor;
          
          
          mayor1=0; 
    
      for(i=0; i<9; i++)
    {
             if(arre[i]>mayor1){
                               mayor1=arre[i];
                               pos1=i;
                               }
             
          }
          
            printf("el que le  sigue del mayor  es :  %d \n",mayor1);
    printf("en la posicion  %d",pos1);
          
    

    
    system("pause");
    }

