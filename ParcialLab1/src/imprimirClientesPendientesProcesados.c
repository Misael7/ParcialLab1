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
			if(clientE[i].isEmpty==0)
			{
				printearClienteSeleccionado(clientE,i);
				if(clientE[i].clientID==clientE[i+1].clientID)
				{
					for(int j = i ; j < length ; j++)
					{
						printearPedidoSeleccionado(requestE,j);
						if(clientE[j].clientID!=clientE[j+1].clientID)
						{

							break;
						}
					}
				}
				else
				{
					printearPedidoSeleccionado(requestE,i);
				}
			}

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
			printearClienteSeleccionado(clientE,i);
			printearPedidoSeleccionado(requestE,i);
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
				printearClienteSeleccionado(clientE,i);
				printearPedidoSeleccionado(requestE,i);
				printearBasuraSeleccionada(basurA,i);
			}

		}
	return 0;
}
