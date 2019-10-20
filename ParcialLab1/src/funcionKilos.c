/*
 * funcionKilos.c
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */


#include "funcionKilos.h"

int masKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{
	Client clientEpp;
	int auxKilos=0;
	int flag=0;
	for(int i = 0; i<length ; i++ )
		{
			if(flag==0)
			{
				auxKilos=1;
				flag =1;
			}
			if(requestE[i].isEmpty==0)
			{
					if(requestE[i].totalWeight >= auxKilos)
					{//2
						auxKilos=requestE[i].totalWeight;
						clientEpp=clientE[requestE[i].idClient];
					}//2
			}
		}//for end
	printf("\nEl cliente con más kilos es: %s\n",clientEpp.clientName);
	return 0;
}

int menosKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{
	Client clientEpp;
	int auxKilos=0;
	int flag=0;

	for(int i = 0; i<length ; i++ )
		{
		if(flag==0)
			{
			auxKilos=32765;
			flag =1;
			}
			if(requestE[i].isEmpty==0)
			{
				if(requestE[i].totalWeight <= auxKilos)
				{//2
					auxKilos=requestE[i].totalWeight;
					clientEpp=clientE[requestE[i].idClient];
				}//2
			}
		}//for end
	printf("\nEl cliente con menos kilos es: %s \n",clientEpp.clientName);
	return 0;
}

int masMilKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
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
	printf("\nMas de 1000 kilos %d \n",contadorKilos);
	return 0;
}

int menosCienKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{
	Client clientEpp;
	int contadorKilos=0;
	length=100;
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
	printf("\nMenos de 100 kilos %d \n",contadorKilos);
	return 0;
}
