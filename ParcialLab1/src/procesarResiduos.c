/*
 * procesarResiduos.c
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */
#include "procesarResiduos.h"

int procesarResiduos(Client clientE[],Request requestE[],Trash basurA[], int length, int length2,int idRequest)
{
	printRequest(requestE,length2);
	printf("\nIntroduzca ID pedido\n");
	getInt(&idRequest);
	printearPedidoSeleccionado(requestE,idRequest);
	int auxhdpe;
	int auxldpe;
	int auxpp;
	int auxtotal;
	do
	{
		printf("\nDetermine peso de hdpe\n");
		getInt(&basurA[idRequest].hdpe);
		auxhdpe=basurA[idRequest].hdpe;
		printf("\nDetermine peso de ldpe\n");
		getInt(&basurA[idRequest].ldpe);
		auxldpe=basurA[idRequest].ldpe;
		printf("\nDetermine peso de pp\n");
		getInt(&basurA[idRequest].pp);
		auxpp=basurA[idRequest].pp;
		basurA[idRequest].idRequest=idRequest;
		basurA[idRequest].isEmpty=0;
		auxtotal = requestE[idRequest].totalWeight;

	}while((auxhdpe + auxldpe + auxpp )>auxtotal);
	printf("\nEstado de pedido completo\n");
	requestE[idRequest].requestStatus=1;
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
	printf("PP: %d \n", basurA[length].pp);
	return 0;
}
