
#include <stdio.h>

int V4;
int bits;
int bytes;
int kilobytes;
float gigabytes;
float terabytes;

int main()

{
    printf("ingresa el numero de megabytes:");
    scanf ("%d",&V4);

    bits=8*1024*V4;
    bytes=1024*1024*V4;
    kilobytes=1024*V4;
    gigabytes=(float)V4/1024;
    terabytes=(float)V4/1048576;
    
    
    printf("De megabytes a bits: %d\n",bits);
    printf("De megabytes a bytes: %d\n",bytes);
    printf("De megabytes a kilobytes: %d\n",kilobytes);
    printf("De megabytes a gigabytes: %f\n",gigabytes);
    printf("De megabytes a terabytes: %f\n ",terabytes);
}	
