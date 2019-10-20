/*
 * imprimirClientesPendientesProcesados.c
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#include "imprimirClientesPendientesProcesados.h"

int imprimirClientesPendiente(Client clientE[],Request requestE[],Trash basurA[],int length,int length2)
{

	for(int i = 0; i<length ; i++ )
	{

		if (requestE[i].requestStatus==0 && requestE[i].isEmpty==0)
		{
				printearClienteSeleccionado(clientE,requestE[i].idClient);
				printearPedidoSeleccionado(requestE,requestE[i].requestID);
		}


	}


	return 0;
}

int imprimirClientesProcesados(Client clientE[],Request requestE[],Trash basurA[],int length,int length2)
{

	for(int i = 0; i<length ; i++ )
	{
		if (requestE[i].requestStatus==1 && clientE[i].isEmpty==0)
		{
			printearClienteSeleccionado(clientE,requestE[i].idClient);
			printearPedidoSeleccionado(requestE,requestE[i].requestID);
		}

	}


	return 0;
}

int ImprimirBasuraProcesada(Client clientE[],Request requestE[],Trash basurA[],int length,int length2)
{
	for(int i = 0; i<length ; i++ )
		{
			if (requestE[i].requestStatus==1 && basurA[i].isEmpty==0)
			{
				printearClienteSeleccionado(clientE,requestE[i].idClient);
				printearPedidoSeleccionado(requestE,requestE[i].requestID);
				printearBasuraSeleccionada(basurA,basurA[i].idRequest);
			}

		}
	return 0;
}
