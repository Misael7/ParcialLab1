/*
 * pedidoDeRecoleccion.c
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */
#include "pedidoDeRecoleccion.h"

int pedidoRecoleccion(Client clientE[],Request requestE[], int length, int length2,int idClient)
{
	printClient(clientE,length);
	printf("\nIntroduzca ID de cliente a cargar pedido\n");
	getInt(&idClient);
	printf("\nEl cliente seleccionado fue:\n");
	printearClienteSeleccionado(clientE,idClient);
	printf("\n");
	addRequest(requestE,length2,idClient);
	printf("\n");
	printRequest(requestE,length2);
	return 0;
}
////////////////////////////////////////////////////////////
int printearClienteSeleccionado(Client clientE[], int length)
{
	printf("\nEmpresa: %s \n",clientE[length].clientName);
	printf("Localidad: %s \n",clientE[length].clientLoc);
	printf("direccion: %s \n", clientE[length].clientDir);
	printf("cuit: %d \n", clientE[length].clientCuit);
	printf("ID cliente: %d \n", clientE[length].clientID);
	return 0;
}
