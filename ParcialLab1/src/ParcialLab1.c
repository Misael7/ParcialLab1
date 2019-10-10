/*
 ============================================================================
 Name        : ParcialLab1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "handyFunctions.h"
#include "strCliente.h"
#define LENGTH 20

int main(void)
{
	Client clientE[LENGTH];
	int menuOptions;
	int flagAdd=0;
	int searchNum;
	startClient(clientE,LENGTH);
	////whilestart
	do
	{
		printf("\nIngrese una opcion para operar:\n1)Alta Cliente\n2)Modificar Cliente\n3)Baja Cliente\n9)Salir ");
		FLUSH;
		scanf("%d",&menuOptions);
		switch(menuOptions)
		///start menu
		{
			case(1):
					addClient(clientE, LENGTH);
					flagAdd=1;
					FLUSH;
					break;
			//-------------------------------------------------------------------------//
			case(2):
					if(flagAdd==1)
					{
						modClient(clientE,LENGTH,searchNum);
					}
					else
					{
						printf("\n Debe cargar un cliente antes de modificarlo\n");
					}
					FLUSH;
					break;

			//-------------------------------------------------------------------------//
			case(3):
					if(flagAdd==1)
					{
						removeClient(clientE,LENGTH,searchNum);
					}
					else
					{
						printf("\n Debe cargar un empleado antes de darlo de baja\n");
					}
					FLUSH;
					break;
			//-------------------------------------------------------------------------//
			case(8):
					if(flagAdd==1)
					{
						printClient(clientE,LENGTH);
					}
					else
					{
						printf("\n Debe cargar un cliente para mostrarlo!!");
					}
					FLUSH;
					break;


		}
		///end menu
	}while(menuOptions!=9);
	/////whileend


	return EXIT_SUCCESS;
}
