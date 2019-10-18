/*
 * hardcodeos.h
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */

#ifndef HARDCODEOS_H_
#define HARDCODEOS_H_
#include "strCliente.h"
#include "strPedidos.h"
#include "handyFunctions.h"
#include "strTrash.h"

int addClientHardcode(Client clientE[], int length);
int addRequestHardcode(Request requestE[],Trash basurA[], int length);
#endif /* HARDCODEOS_H_ */
