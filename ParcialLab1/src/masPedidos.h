/*
 * masPedidosPendientes.h
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */

#ifndef MASPEDIDOS_H_
#define MASPEDIDOS_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"

int masPedidosPendientes(Client clientE[],Request requestE[],Trash basurA,int length, int length2);

int masPedidosProcesados(Client clientE[],Request requestE[],Trash basurA,int length, int length2);

int masPedidos(Client clientE[],Request requestE[],Trash basurA,int length, int length2);

#endif /* MASPEDIDOS_H_ */
