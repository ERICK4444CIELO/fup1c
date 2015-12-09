#include<stdio.h>
#include<stdlib.h>

int EDAD;

 int main()
 
 {
 	printf("PROGRAMA  QUE   TE DICE SI ERES  BB,NIÑO, ADOLECENTE,JOVEN,ADULTO, ADULTO MAYOR  ");
 	printf("  introduce TU EDAD  ");	
 	scanf("%d",&EDAD);
 	
 	   if(EDAD>=1&&EDAD<=160){
 	   	
 	   	
 	   	
 	   	    if(EDAD<3){
 	   	    	printf("   eres  bebe  \n");
				}
			else{
					if(EDAD<13){
 	   	    	    printf("   eres  niño  \n");
				               }
		            else{
				        if(EDAD<19){
 	   	    	        printf("   eres  adolecente  \n");
			                        }
			            else{
			                 if(EDAD<29){
 	   	    	              printf("   eres  joven \n");
				                        }
						    else{
							       if(EDAD<60){
 	   	    	                     printf("   eres  adulto  \n");
			                                      	}
			                        else{
			                        	 if(EDAD>60){
 	   	    	printf("   eres  adulto  mayor  \n");
				}
									}              	
						}					
												}
				
 	   	                                   
 	   	    
 	   	   
			}
				}
 	   	    
 	   	    
 	   	    
 	   	    
 	   	    
 	   	    
		}
     	else{
 	     	    printf(" SOLO  EDADES  ENTRE  1  Y   160  \n"); 
	   }
 	


 
 			
 	   system("pause");
 }
