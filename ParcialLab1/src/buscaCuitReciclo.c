/*
 * buscaCuitReciclo.c
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#include "buscaCuitReciclo.h"

int buscaCuitReciclado(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{
	int auxCuit;
	int auxClientID;
	int opcionBasura;
	int auxHDPE=0;
	int auxLDPE=0;
	int auxPP=0;
	printf("\n Ingrese Cuit a hallar \n");
	scanf("%d",&auxCuit);
	printf("Cuit ingresado %d\n",auxCuit);
	FLUSH;
	for(int i = 0; i < length ; i++)
	{
		if(clientE[i].clientCuit==auxCuit)
		{
			auxClientID=clientE[i].clientID;
			if(requestE[i].idClient==auxClientID && requestE[i].requestStatus==1)
			{
				printf("Seguimiento de la basura primero %d\n",auxHDPE);
			}
			for(int j=0;j<length;j++)
			{
				if(requestE[j].idClient==auxClientID && requestE[j].requestStatus==1)
				{
					printf("Seguimiento de la basura segundo %d\n",auxHDPE);
					auxHDPE = auxHDPE + basurA[j].hdpe;
					auxLDPE = auxLDPE + basurA[j].ldpe;
					auxPP = auxPP + basurA[j].pp;
				}
			}
			printf("Seguimiento de la basura tercero %d\n",auxHDPE);

		}

	}
	do{
		printf("\nIngrese tipo de basura reciclada a informar 1 = HDPE 2=LDPE 3=PP 9=SALIR\n");
		scanf("%d",&opcionBasura);
		FLUSH;
		switch(opcionBasura)
		{
			case(1):
			printf("Cantidad de HDPE: %d\n",auxHDPE);
			FLUSH;
			break;
			case(2):
			printf("Cantidad de LDPE: %d\n",auxLDPE);
			FLUSH;
			break;
			case(3):
			printf("Cantidad de PP: %d\n",auxPP);
			FLUSH;
			break;
		}
	}while(opcionBasura!=9);
	return 0;
}

