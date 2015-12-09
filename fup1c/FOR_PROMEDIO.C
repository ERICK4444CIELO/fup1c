#include<stdio.h>
#include<stdlib.h>
int i;
int j;
int suma;
int promedio;
int final;
int num;
int lim;
int main()


{



printf("INGRESE EL NUMERO DE CALIFICACIONES  PARA EL PROMEDIO    ");
	            scanf("%d",&lim);

 for (i=1; i<=lim;  i++)	{
                printf("INGRESE la  calificacion numero %d",i);
                 printf(" --->>>> ");
	            scanf("              \n%d",&num);
                 suma=suma+num;
                    }
                    promedio=suma/lim;
                    printf("  tu promedio es---->>>> : %d",promedio);
                    
	system("pause");

}

