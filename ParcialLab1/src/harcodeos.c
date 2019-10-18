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

	strcpy(clientE[4].clientName,"TERRABUSI");
	clientE[4].clientCuit= 30678142;
	strcpy(clientE[4].clientLoc,"QUILMES");
	strcpy(clientE[4].clientDir,"rocha 784");
	clientE[4].isEmpty = 0;
	clientE[4].clientID= 4;

	strcpy(clientE[5].clientName,"DIA");
	clientE[5].clientCuit= 314581253 ;
	strcpy(clientE[5].clientLoc,"AVELLANEDA");
	strcpy(clientE[5].clientDir,"Mitre 750");
	clientE[5].isEmpty = 0;
	clientE[5].clientID= 5;

	strcpy(clientE[6].clientName,"QUILMES");
	clientE[6].clientCuit= 301485756;
	strcpy(clientE[6].clientLoc,"QUILMES");
	strcpy(clientE[6].clientDir,"rocha 741");
	clientE[6].isEmpty = 0;
	clientE[6].clientID= 6;
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

	requestE[4].isEmpty=0;
	requestE[4].requestID=4;
	requestE[4].requestStatus=0;
	requestE[4].totalWeight=300;

	requestE[5].isEmpty=0;
	requestE[5].requestID=5;
	requestE[5].requestStatus=1;
	requestE[5].totalWeight=1500;
	basurA[5].hdpe=500;
	basurA[5].ldpe=150;
	basurA[5].pp=270;
	basurA[5].isEmpty=0;

	/*requestE[6].isEmpty=0;
	requestE[6].requestID=5;
	requestE[6].requestStatus=1;
	requestE[6].totalWeight=1500;*/

	return 0;
}
