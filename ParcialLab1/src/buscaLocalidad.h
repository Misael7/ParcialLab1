/*
 * buscaLocalidad.h
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#ifndef BUSCALOCALIDAD_H_
#define BUSCALOCALIDAD_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"

/**
*\brief	 Busca pedidos en estado pendiente según localidad ingresada
*\param	 Estructuras y sus tamaños
*\return 0 si es exitosa
*
*/

int buscaLocalidadPedidosPendientes(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);
#endif /* BUSCALOCALIDAD_H_ */
