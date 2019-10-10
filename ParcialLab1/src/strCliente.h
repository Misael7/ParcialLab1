/*
 * strCliente.h
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#ifndef STRCLIENTE_H_
#define STRCLIENTE_H_

typedef struct {
	int clientID;
	char clientName[51];
	char clientLoc[51];
	char clientDir[51];
	int clientCuit;
	int isEmpty;
} Client;



#endif /* STRCLIENTE_H_ */
