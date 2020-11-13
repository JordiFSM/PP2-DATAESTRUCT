/*****keys administrativos************************
 * Nombre del archivo: nodo.hpp
 * Tipo de archivo: codigo fuente c++
 * Proyecto: PP2 keys
 * Autor: Jordi Segura Madrigal
 * Empresa: Instituto Tecnológico de Costa Rica
 *****Descripción**********************************
 * Archivo que contiene la estructura nodo necesaria en las listas
 * 
 *****Versión**************************************
 * ## 1.0 | Fecha y hora: 27-09-2020| Autor: Jordi Segura Madrigal
 * 
 **************************************************/
 
#ifndef NODO_HPP
#define NODO_HPP
#include <stdlib.h>
#include <stdio.h>

/*****Nombre***************************************
 * nodo
 *****Descripción**********************************
 * Estructura tipo nodo
 *****Atributos************************************
 * cha* key, nodo* siguiente
 *****Métodos**************************************
 * accesores 
 **************************************************/


class nodo {
	private:
		char* key;
		nodo *siguiente;

	public:
		nodo(char* pkey) {
			key = pkey;
			this->siguiente = nullptr;
		}
		
		char* getkey () {
			return key;
		}

		nodo* getSig () {
			return siguiente;
		}

		void setSig (nodo *siguientex) {
			siguiente = siguientex;
		}
};

#endif