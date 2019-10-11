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
#include "strPedidos.h"
#include "strTrash.h"
#define LENGTH 100
#define LENGTH2 1000

int main(void)
{
	Client clientE[LENGTH];
	Request requestE[LENGTH2];
	Trash basurA[LENGTH2];
	int menuOptions;
	int flagAdd=0;
	int searchNum;
	startClient(clientE,LENGTH);
	startRequest(requestE,LENGTH2);
	////whilestart
	do
	{
		printf("\nIngrese una opcion para operar:\n1)Alta Cliente\n2)Modificar Cliente\n3)Baja Cliente\n4)Crear pedido de recoleccion\n8)Mostrar Clientes\n9)Salir ");
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
						printf("\n Debe cargar un cliente antes\n");
					}
					FLUSH;
					break;
			//-------------------------------------------------------------------------//
			case(4):
					if(flagAdd==1)
					{
						pedidoRecoleccion(clientE,requestE,LENGTH,LENGTH2);
					}
					else
					{
						printf("\n Debe cargar un cliente antes\n");
					}
					FLUSH;
					break;
			//-------------------------------------------------------------------------//
			case(5):
					if(flagAdd==1)
					{
						procesarResiduos(clientE,requestE,basurA,LENGTH,LENGTH2);
					}
					else
					{
						printf("\n Debe cargar un cliente antes\n");
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