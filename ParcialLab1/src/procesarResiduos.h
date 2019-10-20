/*
 * procesarResiduos.h
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#ifndef PROCESARRESIDUOS_H_
#define PROCESARRESIDUOS_H_

#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"
#include "strTrash.h"

int procesarResiduos(Client clientE[],Request requestE[],Trash basurA[], int length, int length2,int idRequest);
int printearPedidoSeleccionado(Request requestE[], int length);
int printearBasuraSeleccionada(Trash basurA[], int length);


#endif /* PROCESARRESIDUOS_H_ */
