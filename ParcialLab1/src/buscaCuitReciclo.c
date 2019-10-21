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
	printf("\n Ingrese Cuit a hallar \n");
	/*getInt(&auxCuit);*/
	scanf("%d",&auxCuit);
	printf("Cuit ingresado %d\n",auxCuit);
	FLUSH;
	for(int i = 0; i < length ; i++)
	{
		if(clientE[i].clientCuit=auxCuit)
		{
			auxClientID=clientE[i].clientID;
			for(int j=0;j<length;j++)
			{
				if(requestE[j].idClient==auxClientID && requestE[j].requestStatus==1)
				{
					printf("\nIngrese tipo de basura reciclada a informar 1 = HDPE 2=LDPE 3=PP\n");
					scanf("%d",&opcionBasura);
					FLUSH;
					switch(opcionBasura)
					{
					case(1):
							printf("Cantidad de HDPE: %d\n",basurA[j].hdpe);
							FLUSH;
							break;
					case(2):
							printf("Cantidad de LDPE: %d\n",basurA[j].ldpe);
							FLUSH;
							break;
					case(3):
							printf("Cantidad de PP: %d\n",basurA[j].pp);
							FLUSH;
							break;
					}
				}
			}

		}

	}

	return 0;
}
