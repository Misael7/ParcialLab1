/*
 * buscaCuitReciclo.h
 *
 *  Created on: Oct 20, 2019
 *      Author: misael
 */

#ifndef BUSCACUITRECICLO_H_
#define BUSCACUITRECICLO_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"

/**
*\brief Obtiene un Cuit, busca un Client y los pedidos relacionados y da opciones de reciclado
*\param	 Estructuras y tamaños
*\return 0 si es exitosa
*
*/

int buscaCuitReciclado(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);

#endif /* BUSCACUITRECICLO_H_ */
