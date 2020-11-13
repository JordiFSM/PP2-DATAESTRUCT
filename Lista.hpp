/*****keys administrativos************************
 * Nombre del archivo: Lista.hpp
 * Tipo de archivo: codigo fuente c++
 * Proyecto: PP2 keys
 * Autor: Jordi Segura Madrigal
 * Empresa: Instituto Tecnológico de Costa Rica
 *****Descripción**********************************
 * Estructura que contiene las estructuras listas y sus metodos
 * 
 *****Versión**************************************
 * ## 1.0 | Fecha y hora: 27-09-2020| Autor: Jordi Segura Madrigal
 * 
 **************************************************/
 
#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
#include "Atributo.hpp"

/*****Nombre***************************************
 * lista
 *****Descripción**********************************
 * Estructura tipo lista
 *****Atributos************************************
 *int cantidad
 *char* nombre 
 *char tipo[8] 
 *int id;
 *treenode *first
 *lista* siguiente
 *****Métodos**************************************
 * accesores, cancionRep,insertar, imprimirLista,borrar,buscar
 **************************************************/
class Lista{
	private:
		int cantidad;
		Atributo *first;
		Atributo *last;
		
	public:
		
		Lista() {
			cantidad = 0;
			first = nullptr;
		}
		
		int getCant(){
			return cantidad;
		}
		
		Atributo* getfirst(){
			return first;
		}

		void insertar (Atributo* nuevo) {
			if(first == nullptr){
				first = nuevo;
			}else{
				Atributo* temp = first;
				if (cantidad == 1){
					first->setBro(nuevo);
				}else{
					for(int x = 0; cantidad-1 > x; x++){
						temp = temp->getBro();
					}
				}
				temp->setBro(nuevo);
			}
			cantidad++;
		}


/*****Nombre***************************************
 * imprimirLista
 *****Descripción**********************************
 * imprime los nombres d los treenodes que hayan 
 *****Retorno**************************************
 * ninguno
 *****Entradas*************************************
 * ninguna
 **************************************************/
 /*
		void imprimirLista() {
			treenode *imprimir = first;
			int i = 0;
			std::cout << "\nLista con " << cantidad << " elementos.\n";
			if (cantidad == 0)
				printf("\nLista vacia.\n");
			while (imprimir != nullptr){
				printf("[ %d ] %d \n",i,imprimir->getkey());
				imprimir = imprimir->getSig ();
				i++;
			} 
		}
*/

/*****Nombre***************************************
 * buscar
 *****Descripción**********************************
 * busca el treenode al que pertenece el char*
 *****Retorno**************************************
 * treenode*
 *****Entradas*************************************
 *char*
 **************************************************/
 
		Atributo* search (char* key) {
			if (cantidad != 0) {
				Atributo *buscado = first;
				while (buscado != nullptr) {
					if (buscado->getKey() == key)
						return buscado;
					buscado = buscado->getBro();
				} 
			}
			return nullptr;
		}

		bool beAtribute(char* key){
			Atributo* b = search(key);
			if(b == nullptr){
				false;
			}
			return true;
		}
		
		
};

#endif