/*****Datos administrativos************************
 * Nombre del archivo: utilitarios.hpp
 * Tipo de archivo: head
 * Proyecto: Proyecto SD 2 
 * Autor: Jordi Segura y Jirgorth
 *****Descripción**********************************
 * 
 * 
 *****Versión**************************************
 * ## | Fecha y hora | Autor
 * 
 **************************************************/


#ifndef UTILITARIOS_HPP
#define UTILITARIOS_HPP

#include <iostream>
#include <stdlib.h>


/*****Nombre***************************************
 * Utilitarios
 *****Descripción**********************************
 * Utilizada para realizar operaciones con cadenas
 * y numeros
 *****Atributos************************************
 * int id 
 *****Métodos**************************************
 * 
 **************************************************/

class Utilitarios{
	private:
		int id = 1000000;
		
	public:
		
		Utilitarios(){
			std::srand(time(nullptr));			
		}
		
/*****Nombre***************************************
 * generaID
 *****Descripción**********************************
 * Genera un id diferente al anterior
 *****Retorno**************************************
 *int
 *****Entradas*************************************
 * 
 **************************************************/
		int generaID(){
			int res = id;
			id++;
			return res;
		}
		
/*****Nombre***************************************
 * len
 *****Descripción**********************************
 * retorna el tamaño de char que posee el puntero
 *****Retorno**************************************
 * int
 *****Entradas*************************************
 * un puntero char
 **************************************************/

		int len(char* name){
			int res = 0;
			while(*name){
				res++;
				*name++;
			}
			return res;
		}
		
/*****Nombre***************************************
 * isSame
 *****Descripción**********************************
 * Compara 2 cadenas de caracteres para verificar
 * si sin iguales
 *****Retorno**************************************
 * un booleano
 *****Entradas*************************************
 * 2 char*
 **************************************************/

		bool isSame(char* name1, char* name2){
			if(this->len(name1) == this->len(name2)){
				while(*name1){
					if(!(*name1 == *name2)){
						return false;
					}
					*name1++;*name2++;
				}
				return true;
			}else{
				return false;
			}
		}

/*****Nombre***************************************
 * addContent
 *****Descripción**********************************
 * Concatena a la derecha del contenido del 
 * puntero s el contenido del puntero t 
 *****Retorno**************************************
 * un char*
 *****Entradas*************************************
 * 2 chars*
 **************************************************/

		char* addContent(char* s,char* t){
			int i = len(s);
			int j = len(t);
			if( s == NULL || t == NULL)
			return NULL;
			char * aux = (char*)malloc(i + j + 1) ;
			if(aux == nullptr)
				return nullptr;
			for(i = 0; s[i]; aux[i] = s[i], i++);
			for(j = 0; t[j]; aux[i] = t[j], j++, i++);

			return aux;
		}
};
#endif