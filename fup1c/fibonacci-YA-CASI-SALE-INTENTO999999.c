#include<stdio.h>
#include<stdlib.h>

int i;
int j;
int k;
int res;
int n;

int main()
{
  

  i=0;
  j=1;
 
  printf("ingresa cualquier numero para mostrarte la posicion de Fobonacci\n");
  scanf("%d",&n);
  printf("\n0\n1\n",k);
 
  for(res=1;res<=n;res++)
  {
      k=i+j;
      printf("%d\n",k);
      i=j;
      j=k;
  }
 
  system("PAUSE");     
  
}
