/*
 * ppReciclado.h
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#ifndef PPRECICLADO_H_
#define PPRECICLADO_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"

int ppReciclado(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);

#endif /* PPRECICLADO_H_ */
