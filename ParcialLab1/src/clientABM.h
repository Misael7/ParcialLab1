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
/**
*\brief	Inicia Clientes con isEmpty
	*\param Cliente, tamaño
	*\return 0 Si es exitosa
*
*/
int startClient(Client clientE[],int length);
/**
*\brief Inicia campos de estructura Cliente
*\param Cliente, tamaño
*\return 0 si exitoso
*
*/

int addClient(Client clientE[], int length);
/**
*\brief Muestra clientes
*\param Cliente, tamaño
*\return 0 si exitoso
*
*/

int printClient(Client clientE[], int length);
/**
*\brief Muestra clientes
*\param Cliente, tamaño, ID búsqueda
*\return 0 si exitoso
*
*/
int findClientById(Client clientE[], int length,int idSearch);
/**
*\brief Borra cliente por ID
*\param Cliente, tamaño, ID búsqueda
*\return 0 si exitoso
*
*/

int removeClient(Client listA[], int length,int idSearch);
/**
*\brief Modifica cliente por ID
*\param Cliente, tamaño, ID búsqueda
*\return 0 si exitoso
*
*/

int modClient(Client listA[],int length, int idSearch);

#endif /* CLIENTABM_H_ */
