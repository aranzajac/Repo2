#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
int ,lado,H,res,base,altura,radio;
 
{
	printf("calculadora de areas");
	printf("elige una opcion: 1.-rectangulo, 2.-triangulo, 3.-trapecio, 4.-circulo");
  	  scanf ("%i", &H);
      switch (H)
		{
		
        	case 1: 
        	    printf("rectangulo");
        		printf("lado1 ");
      	        	scanf ("%i", &lado1);
      	        printf ("lado2");
      	        	scanf ("%i", &lado2);
      	        res= lado1 * lado2;
				printf("el resultado del area es: %i*%i = %i",lado1,lado2,res);
				break;
				
				 }
        { case 2:
        	    printf("triangulo");
        		printf("base");
      	            scanf("%i", &base);
      	        printf("altura ");
      	             scanf("%i", &altura);
        		res= base*altura/2;
        		printf("el resultado del area es: %i*%i/2 = %i", base, altura, res);
        		break;
				}
	  	{case 3:
        		 printf("trapecio");
        		printf("baseM");
      	            scanf("%i", &baseM);
      	        printf("basem ");
      	             scanf("%i", &basem);
      	        printf("altura");
      	             scanf("%i", &altura);
        		res= ((baseM+basem)*altura)/2;
        		printf("el resultado del area es: ((%i+%i)*%i)/2= %i", bassM,basem, altura, res);
        		break;}
         {case 4:
        		printf("circulo");
        		printf("radio");
      	            scanf("%i", &radio);
      	        printf("p");
      	            scanf("%i",&3.14 );  
        		res= 3.14*radio^radio;
        		printf("el resultado del area es: %i*%i^%i = %i", radio, res);
        		break;
        		}
        		return
}
	
