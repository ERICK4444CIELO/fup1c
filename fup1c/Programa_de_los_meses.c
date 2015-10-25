#include<stdio.h>
#include <stdlib.h>

int num;

int main ()
{
    printf ("Dame un numero del 1 al 12 y te diré a que mes corresponde \n");
    scanf ("%d",&num);
    switch (num)
    {
           case 1:
                {
                      printf(" enero\n");      
                } break;
           case 2:
                {
                      printf(" febrero\n");      
                } break;     
           case 3:
                {
                      printf(" marzo\n");      
                } break;     
           case 4:
                {
                      printf("abril\n");      
                } break;     
           case 5:
                {
                      printf("e mayo\n");      
                } break;     
           case 6:
                {
                      printf(" junio\n");      
                } break;     
           case 7:
                {
                      printf(" julio\n");      
                } break;     
           case 8:
                {
                      printf(" agosto\n");      
                } break;     
           case 9:
                {
                      printf("septiembre\n");      
                } break;     
           case 10:
                {
                      printf(" octubre\n");      
                } break;     
           case 11:
                {
                      printf(" noviembre\n");      
                } break;     
           case 12:
                {
                      printf(" diciembre\n");      
                } break;     
           default:
                   {
                             printf("error no pertenece a ningun mes");
                   }
    }
    system("pause");
}
