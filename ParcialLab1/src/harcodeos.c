/*
 * harcodeos.c
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */

#include "hardcodeos.h"

int addClientHardcode(Client clientE[], int length)
{
	strcpy(clientE[1].clientName,"Telefonica");
	clientE[1].clientCuit= 301122334;
	strcpy(clientE[1].clientLoc,"CABA");
	strcpy(clientE[1].clientDir,"Lima 1234");
	clientE[1].isEmpty = 0;
	clientE[1].clientID= 1;
	strcpy(clientE[2].clientName,"DATASOFT");
	clientE[2].clientCuit= 304455667;
	strcpy(clientE[2].clientLoc,"CABA");
	strcpy(clientE[2].clientDir,"Corrientes 2547");
	clientE[2].isEmpty = 0;
	clientE[2].clientID= 2;
	strcpy(clientE[3].clientName,"NESTLE");
	clientE[3].clientCuit= 308899559;
	strcpy(clientE[3].clientLoc,"LANUS");
	strcpy(clientE[3].clientDir,"cucha cucha 555");
	clientE[3].isEmpty = 0;
	clientE[3].clientID= 3;
	return 0;
}


int addRequestHardcode(Request requestE[],Trash basurA[], int length)
{
	requestE[1].isEmpty=0;
	requestE[1].requestID=1;
	requestE[1].requestStatus=1;
	requestE[1].totalWeight=1000;
	basurA[1].hdpe=200;
	basurA[1].ldpe=145;
	basurA[1].pp=230;
	basurA[1].isEmpty=0;
	requestE[2].isEmpty=0;
	requestE[2].requestID=2;
	requestE[2].requestStatus=1;
	requestE[2].totalWeight=800;
	basurA[2].hdpe=210;
	basurA[2].ldpe=45;
	basurA[2].pp=30;
	basurA[2].isEmpty=0;
	requestE[3].isEmpty=0;
	requestE[3].requestID=3;
	requestE[3].requestStatus=0;
	requestE[3].totalWeight=800;
	basurA[3].isEmpty=1;


	return 0;
}
