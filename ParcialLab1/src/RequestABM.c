/*
 * RequestABM.c
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */
#include "RequestABM.h"

int startRequest(Request requestE[],int length)
{
	if(requestE!=NULL)
	{
		for(int i=0; i < length;i++)
			{
			requestE[i].isEmpty=1;
			}

	}
	return 0;
}

int addRequest(Request requestE[], int length,int idClient)
{
	for(int i = 0; i<length ; i++ )
	{
		if(requestE[i].isEmpty == 1)
		{

			printf("Ingrese kilos:\n");
			getInt(&requestE[i].totalWeight);
			FLUSH;
			printf("Pedido tomado como pendiente\n");
			requestE[i].requestStatus=0;
			requestE[i].isEmpty=0;
			requestE[i].requestID=i;
			requestE[i].idClient = idClient;

			break;
		}
	}

	return 0;
}

int printRequest(Request requestE[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(requestE[i].isEmpty==0)
		{
			printf("idPedido: %d \n", requestE[i].requestID);
			printf("idClientPedido: %d \n", requestE[i].idClient);
			printf("Estado pedido \n0 = pendiente\n1 = Completo:\n%d \n", requestE[i].requestStatus);
			printf("Peso: %d \n", requestE[i].totalWeight);
		}
	}

	return 0;
}

/*int findClientById(Client clientE[], int length,int idSearch)
{
	printf("\n Introduzca ID de empleado a localizar \n");
	getInt(&idSearch);
	clientE[idSearch];
	printf("\nLa ID buscada corresponde a:\n");
	printEmployees(clientE,length);
	return 0;
}
*/
/*int removeRequest(Request requestE[], int length,int idSearch)
{
	int rta=0;
	printf("\nIntroduzca ID de empleado a dar de baja \n");
	getInt(&idSearch);
	FLUSH;
	printf("\nIngrese 1 para eliminar\n");
	getInt(&rta);
	FLUSH;
	if(rta==1)
	{
		requestE[idSearch].isEmpty=1;
		printf("\nHa sido eliminado\n");
	}
	return 0;
}*/
/*
int modRequest(Request clientE[],int length, int idSearch)
{
	printf("\n Introduzca ID de empleado a modificar\n");
	getInt(&idSearch);
	requestE[idSearch].isEmpty=1;
	printf("Ingrese localidad:\n");
	getStringNames(requestE[idSearch].clientLoc);
	FLUSH;
	printf("Ingrese direccion:\n");
	getString(requestE[idSearch].clientDir);
	FLUSH;
	return 0;
}*/

