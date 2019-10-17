/*
 * masPedidosPendientes.c
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */

#include "masPedidos.h"

int masPedidosPendientes(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	int pedidosSumaInit=0;
	int auxmasPedidos=1;
	Client clientEpp;
	int flag=0;

	for(int i = 0; i<length ; i++ )
		{
			if (requestE[i].requestStatus==0 && requestE[i].isEmpty==0)
			{
				if(clientE[i].isEmpty==0 )
				{//1
					pedidosSumaInit++;
					if(flag==0)
					{
						clientEpp=clientE[i];
						flag = 1;
					}
					if(clientE[i+1].isEmpty==0 && clientE[i+1].clientID==clientE[i].clientID)
					{//2
						if(pedidosSumaInit >= auxmasPedidos)
						{
							auxmasPedidos=pedidosSumaInit;
							clientEpp=clientE[i];
						}
					}//2
					else
					{//else
						if(clientE[i+1].isEmpty==0 && clientE[i+1].clientID!=clientE[i].clientID)
						{
							pedidosSumaInit=0;
						}
					}//else
				}//1
			}

		}//for end
	printf("\nEl cliente con más pedidos pendientes es: %s ID: %f \n",clientEpp.clientName,clientEpp.clientID);
	return 0;
}

int masPedidosProcesados(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	int pedidosSumaInit=0;
	int auxmasPedidos=1;
	Client clientEpp;
	int flag=0;

	for(int i = 0; i<length ; i++ )
		{
			if (requestE[i].requestStatus==1 && requestE[i].isEmpty==0)
			{
				if(clientE[i].isEmpty==0 )
				{//1
					pedidosSumaInit++;
					if(flag==0)
					{
						clientEpp=clientE[i];
						flag = 1;
					}
					if(clientE[i+1].isEmpty==0 && clientE[i+1].clientID==clientE[i].clientID)
					{//2
						if(pedidosSumaInit >= auxmasPedidos)
						{
							auxmasPedidos=pedidosSumaInit;
							clientEpp=clientE[i];
						}
					}//2
					else
					{//else
						if(clientE[i+1].isEmpty==0 && clientE[i+1].clientID!=clientE[i].clientID)
						{
							pedidosSumaInit=0;
						}
					}//else
				}//1
			}

		}//for end
	printf("\nEl cliente con más pedidos procesados es: %s ID: %f \n",clientEpp.clientName,clientEpp.clientID);
	return 0;
}

int masPedidos(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	int pedidosSumaInit=0;
	int auxmasPedidos=1;
	Client clientEpp;
	int flag=0;

	for(int i = 0; i<length ; i++ )
		{
			if (requestE[i].isEmpty==0)//acepta sin importar estado
			{
				if(clientE[i].isEmpty==0 )
				{//1
					pedidosSumaInit++;
					if(flag==0)
					{
						clientEpp=clientE[i];
						flag = 1;
					}
					if(clientE[i+1].isEmpty==0 && clientE[i+1].clientID==clientE[i].clientID)
					{//2
						if(pedidosSumaInit >= auxmasPedidos)
						{
							auxmasPedidos=pedidosSumaInit;
							clientEpp=clientE[i];
						}
					}//2
					else
					{//else
						if(clientE[i+1].isEmpty==0 && clientE[i+1].clientID!=clientE[i].clientID)
						{
							pedidosSumaInit=0;
						}
					}//else
				}//1
			}

		}//for end
	printf("\nEl cliente con más pedidos es: %s ID: %f \n",clientEpp.clientName,clientEpp.clientID);
	return 0;
}

