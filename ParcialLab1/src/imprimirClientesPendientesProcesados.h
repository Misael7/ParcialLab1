/*
 * imprimirClientesPendientesProcesados.h
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#ifndef IMPRIMIRCLIENTESPENDIENTESPROCESADOS_H_
#define IMPRIMIRCLIENTESPENDIENTESPROCESADOS_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "strPedidos.h"
#include "strTrash.h"
#include "handyFunctions.h"
#include "clientABM.h"
#include "RequestABM.h"
//funciones de print en procesarResiduos.c y pedidoDeRecoleccion.c (Porque se dio así cuando iba haciendo los puntos)



int imprimirClientesPendiente(Client clientE[],Request requestE[],Trash basurA[],int length,int length2);
int imprimirClientesProcesados(Client clientE[],Request requestE[],Trash basurA[],int length,int length2);


#endif /* IMPRIMIRCLIENTESPENDIENTESPROCESADOS_H_ */
