/*
 * porcentajeCompletado.h
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#ifndef PORCENTAJECOMPLETADO_H_
#define PORCENTAJECOMPLETADO_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"

int porcentajeClientesProcesados(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);
#endif /* PORCENTAJECOMPLETADO_H_ */
