/*
 * clientABM.c
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#include "clientABM.h"

int startClient(Client clientE[],int length)
{
	if(clientE!=NULL)
	{
		for(int i=0; i < length;i++)
			{
			clientE[i].isEmpty=1;
			}

	}
	return 0;
}

int addClient(Client clientE[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(clientE[i].isEmpty == 1)
		{
			printf("Ingrese un nombre:\n");
			getStringNames(clientE[i].clientName);
			FLUSH;
			printf("Ingrese localidad:\n");
			getStringNames(clientE[i].clientLoc);
			FLUSH;
			printf("Ingrese direccion:\n");
			getString(clientE[i].clientDir);
			FLUSH;
			printf("Ingrese cuit:\n");
			getInt(&clientE[i].clientCuit);
			FLUSH;
			clientE[i].isEmpty=0;
			clientE[i].clientID=i;
			printf("ID de cliente: %d \n", clientE[i].clientID);
			break;
		}
	}

	return 0;
}

int printClient(Client clientE[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(clientE[i].isEmpty==0)
		{
			printf("\nEmpresa: %s \n",clientE[i].clientName);
			printf("Localidad: %s \n",clientE[i].clientLoc);
			printf("direccion: %s \n", clientE[i].clientDir);
			printf("cuit: %d \n", clientE[i].clientCuit);
			printf("ID cliente: %d \n", clientE[i].clientID);
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
int removeClient(Client clientE[], int length,int idSearch)
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
		clientE[idSearch].isEmpty=1;
		printf("\nHa sido eliminado\n");
	}
	return 0;
}

int modClient(Client clientE[],int length, int idSearch)
{
	printf("\n Introduzca ID de empleado a modificar\n");
	getInt(&idSearch);
	clientE[idSearch].isEmpty=1;
	printf("Ingrese localidad:\n");
	getStringNames(clientE[idSearch].clientLoc);
	FLUSH;
	printf("Ingrese direccion:\n");
	getString(clientE[idSearch].clientDir);
	FLUSH;
	return 0;
}
