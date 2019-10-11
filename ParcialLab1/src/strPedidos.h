/*
 * strPedidos.h
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#ifndef STRPEDIDOS_H_
#define STRPEDIDOS_H_
#include "strCliente.h"

typedef struct {
	int requestID;
	int totalWeight;
	int requestStatus; //0 for pending 1 for complete
	int isEmpty;
} Request;

#endif /* STRPEDIDOS_H_ */
