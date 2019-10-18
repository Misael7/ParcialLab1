/*
 * funcionKilos.h
 *
 *  Created on: 17 oct. 2019
 *      Author: alumno
 */

#ifndef FUNCIONKILOS_H_
#define FUNCIONKILOS_H_

#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"

int masKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);
int menosKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);
int masMilKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);
int menosCienKilosCliente(Client clientE[],Request requestE[],Trash basurA[],int length, int length2);


#endif /* FUNCIONKILOS_H_ */
