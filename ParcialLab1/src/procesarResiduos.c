/*
 * procesarResiduos.c
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */
#include "procesarResiduos.h"

int procesarResiduos(Client clientE[],Request requestE[],Trash basurA[], int length, int length2)
{
	int selectedID;
	printRequest(requestE,length2);
	printf("\nIntroduzca ID pedido\n");
	getInt(&selectedID);
	printearPedidoSeleccionado(requestE,selectedID);
	printf("\nDetermine peso de hdpe\n");
	getInt(&basurA[selectedID].hdpe);
	printf("\nDetermine peso de ldpe\n");
	getInt(&basurA[selectedID].ldpe);
	printf("\nDetermine peso de pp\n");
	getInt(&basurA[selectedID].pp);
	basurA[selectedID].isEmpty=0;
	printf("\nEstado de pedido completo\n");
	requestE[selectedID].requestStatus=1;
	return 0;
}

int printearPedidoSeleccionado(Request requestE[], int length)
{
	printf("idPedido: %d \n", requestE[length].requestID);
	printf("Estado pedido \n0 = pendiente\n1 = Completo:\n%d \n", requestE[length].requestStatus);
	printf("Peso: %d \n", requestE[length].totalWeight);
	return 0;
}

int printearBasuraSeleccionada(Trash basurA[], int length)
{
	printf("HDPE: %d \n", basurA[length].hdpe);
	printf("LDPE: %d \n", basurA[length].ldpe);
	printf("LDPE: %d \n", basurA[length].pp);
	return 0;
}
