/*
 * porcentajeCompletado.c
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#include "porcentajeCompletado.h"

int porcentajeClientesProcesados(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{
	int auxHdpe=0;
	int auxLdpe=0;
	int auxPp=0;
	int total=0;
	int porcentaje=0;

	for (int i; i< length ; i++)
	{
		if (requestE[i].requestStatus==1 && requestE[i].isEmpty==0)
		{
			auxHdpe = basurA[i].hdpe;
			auxLdpe = basurA[i].ldpe;
			auxPp	= basurA[i].pp;
			total	= requestE[i].totalWeight;
			porcentaje = ((auxHdpe + auxLdpe + auxPp)*100)/total;

			printf("ID Pedido: %d \n Cuit Cliente: %d \n Porcentaje reciclado: %d % \n ", requestE[i].requestID, clientE[requestE[i].idClient].clientCuit,porcentaje);

		}
	}
	return 0;
}
