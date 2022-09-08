/*
 * menuabm.c
 *
 *  Created on: 8 sep. 2022
 *      Author: emili
 */


int menu()
{
	int opcion;
	system("cls");

	    printf("    ****Funciones y Bibliotecas****\n\n");
	    printf("1) Iniciar\n");
	    printf("2) Procesar\n");
	    printf("3) Finalizar\n");
	    printf("4) Salir\n");
	    printf("Ingrese una opcion: ");
	    scanf("%d", &opcion);

	    return opcion;
}


