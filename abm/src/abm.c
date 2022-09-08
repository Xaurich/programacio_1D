/*Desafío: Menú-Funciones y Bibliotecas

Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que
desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe
Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe
Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe
Procesar antes de Finalizar" y no deja continuar
*/


#include <stdio.h>
#include <stdlib.h>
#include "menuabm.h"




int main(void)
{
	int bandera=0;
	char seguir='n';

	do
	{
	    switch (menu())
	    {
	    case 1:
	    	printf("\n");
	    	printf("Usted a Inicializado\n\n");
	    	bandera=1;
	    	system("pause");
	    	break;
	    case 2:
	    	printf("\n");
	    	if(bandera!=1)
	    	{
	    		printf("Debe iniciar antes de procesar\n\n");
	    	}
	    	else
	    	{
	    		printf("Usted a procesado\n\n");
	    		bandera=2;
	    	}
	    	system("pause");
	    	break;
	     case 3:
	    	 printf("\n");
	    	 if(bandera!=2)
	    	 {
	    		 if(bandera==0)
	    		 {
	    			 printf("Debe iniciar antes de finalizar\n\n");
	    		 }
	    		 else
	    		 {
	    			 if(bandera==1)
	    			 {
	    				 printf("Debe procesar antes de finalizar\n\n");
	    			 }
	    		 }
	    		 system("pause");
	    	 }
	    	 else
	    	 {
				 printf("Usted a finalizado\n\n");
				 bandera=3;
				 system("pause");
	    	 }
	    	 break;
	      case 4:
	        system("cls");
	        printf("Esta seguro de que desea salir?(s/n): ");
	        fflush(stdin);
	        scanf("%c", &seguir);
	        break;
	      default:
	            printf("\n");
	            printf("Opcion Invalida!!!\n\n");
	            system("pause");
	        }
	    }
	    while(seguir == 'n');
	    system("pause");


	return EXIT_SUCCESS;
}

