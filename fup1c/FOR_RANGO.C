#include<stdio.h>
#include<stdlib.h>


int numero1;
int numero2;
int i;
int j;
int main()


{


printf(" INGRESA   EL  INICIO      ");
scanf("  \n %d",&numero1);
printf(" INGRESA   EL  FINAL      ");
scanf("  \n %d",&numero2);



           if(numero1<numero2)
                   {
                     for (i=numero1; i<=numero2;  i++)	{
 
	
	                         printf("   \n%d",i);
                              }	
                  }
             else
                {
            for (i=numero1; i>=numero2;  i--)	{
 
	
	                         printf("   \n%d",i);
                              }	


               }

	system("pause");
}

