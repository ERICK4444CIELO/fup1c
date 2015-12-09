#include<stdio.h>
#include<stdlib.h>



int  mes;

int  main()

{
	printf("programa  que te dice  el mes    1--enero ,2...febrero ,3...marzo...etc  ");
 	printf("  introduce el mes    ");	
 	scanf("%d",&mes);
	
switch(mes)
{
	
	case 1:{
			printf("  enero   ");	
	
	}break;
	
		case 2:{
			printf("  febrero   ");	
	
	}break;
		case 3:{
			printf("  marzo  ");	
	
	}break;
	
		case 4:{
			printf("  abril   ");	
	
	}break;
		case 5:{
			printf("  mayo   ");	
	
	}break;
	
		case 6:{
			printf("  junio   ");	
	
	}break;
		case 7:{
			printf("  julio  ");	
	
	}break;
	
		case 8:{
			printf("  agosto   ");	
	
	}break;
			case 9:{
			printf("  septiembre   ");	
	
	}break;
	
		case 10:{
			printf("  octubre   ");	
	
	}break;
		case 11:{
			printf("  noviembre  ");	
	
	}break;
	
		case 12:{
			printf("  diciembre   ");	
	
	}break;
	
	
	default:{ printf("  solo  numeros  del  1 al  12");
}
}

	
	
	
system("pause");	
}
