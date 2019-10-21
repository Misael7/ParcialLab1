/*
 * buscaLocalidad.c
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */


#include "buscaLocalidad.h"


int buscaLocalidadPedidosPendientes(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{
	char localidad[51];
	int cuentaPedidosPendientes=0;
	int auxClientID;
	printf("\n Ingrese Localidad \n");
	getStringNames(localidad);
	for(int i = 0; i < length ; i++)
	{
		if(strcmp(clientE[i].clientLoc,localidad)==0)
		{
			auxClientID=clientE[i].clientID;
			for(int j=0;j<length;j++)
			{
				if(requestE[j].idClient==auxClientID && requestE[j].requestStatus==0)
				{
					printf("%d\n",cuentaPedidosPendientes);
					cuentaPedidosPendientes++;
				}
			}

		}

	}
	printf("Hay un total de %d pedidos pendientes para la Localidad ingresada",cuentaPedidosPendientes);

	return 0;
}
