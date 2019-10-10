/*
 * clientABM.h
 *
 *  Created on: 10 oct. 2019
 *      Author: alumno
 */

#ifndef CLIENTABM_H_
#define CLIENTABM_H_
#include <stdio_ext.h>
#include "strCliente.h"
#include "handyFunctions.h"

int startClient(Client clientE[],int length);
int addClient(Client clientE[], int length);
int printClient(Client clientE[], int length);
int findClientById(Client clientE[], int length,int idSearch);
int removeClient(Client listA[], int length,int idSearch);
int modClient(Client listA[],int length, int idSearch);

#endif /* CLIENTABM_H_ */
