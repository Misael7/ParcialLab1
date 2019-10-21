/*
 * ppReciclado.c
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#include "ppReciclado.h"

int ppReciclado(Client clientE[],Request requestE[],Trash basurA[],int length, int length2)
{

	int auxPP=0;
	int sumaAuxPP=0;
	int cuentaClientesPP=0;
	int promedioPP=0;

	for (int i = 0; i<length;i++)
	{
		if(requestE[i].requestStatus==1)
		{
			auxPP=basurA[i].pp;
			sumaAuxPP=sumaAuxPP+auxPP;
			cuentaClientesPP++;
		}

	}
	promedioPP=sumaAuxPP/cuentaClientesPP;
	printf("Promedio PP reciclado %d\n ",promedioPP);

	return 0;
}
