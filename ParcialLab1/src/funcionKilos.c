/*
 * funcionKilos.c
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */


#include "funcionKilos.h"

int masKilosCliente(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	Client clientEpp;

	for(int i = 0; i<length ; i++ )
		{
			if(requestE[i].isEmpty==0)
			{
				if(clientE[i].isEmpty==0 )
				{//1
					if(requestE[i].totalWeight >= requestE[i+1].totalWeight)
					{//2
						clientEpp=clientE[i];
					}//2

				}//1
			}
		}//for end
	printf("\nEl cliente con más kilos es: %s ID: %f \n",clientEpp.clientName,clientEpp.clientID);
	return 0;
}

int menosKilosCliente(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	Client clientEpp;

	for(int i = 0; i<length ; i++ )
		{
			if(requestE[i].isEmpty==0)
			{
				if(clientE[i].isEmpty==0 )
				{//1
					if(requestE[i].totalWeight <= requestE[i+1].totalWeight)
					{//2
						clientEpp=clientE[i];
					}//2

				}//1
			}
		}//for end
	printf("\nEl cliente con menos kilos es: %s ID: %f \n",clientEpp.clientName,clientEpp.clientID);
	return 0;
}

int masMilKilosCliente(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	Client clientEpp;
	int contadorKilos=0;

	for(int i = 0; i<length ; i++ )
		{
			if(requestE[i].isEmpty==0)
			{
				if(clientE[i].isEmpty==0 )
				{//1
					if(requestE[i].totalWeight >=1000)
					{//2
						contadorKilos++;
					}//2

				}//1
			}
		}//for end
	printf("\nMas de 1000 kilos %f \n",contadorKilos);
	return 0;
}

int menosCienKilosCliente(Client clientE[],Request requestE[],Trash basurA,int length, int length2)
{
	Client clientEpp;
	int contadorKilos=0;

	for(int i = 0; i<length ; i++ )
		{
			if(requestE[i].isEmpty==0)
			{
				if(clientE[i].isEmpty==0 )
				{//1
					if(requestE[i].totalWeight <=100)
					{//2
						contadorKilos++;
					}//2

				}//1
			}
		}//for end
	printf("\nMenos de 100 kilos %f \n",contadorKilos);
	return 0;
}
