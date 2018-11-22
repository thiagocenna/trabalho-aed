// TRABALHO FINAL DE AED
// PROTOCOLO DE ROTEAMENTO
// Funcionalidade: Roteador e Dado
// Arquivo que contem as classes do Roteador e do Dado que será transmitido
// Responsavel: Daniel Gobbi

#ifndef ROTEADOR_E_DADO
#define ROTEADOR_E_DADO
#include <iostream>
#include <time.h>
#include <string>

class Roteador{
  public:
    // ATRIBUTOS
    int id; // identificador do Roteador
};

class Dado{
  public:
    // ATRIBUTOS
    int codigo; // identificador do Dado
    
	
	// CONSTRUTOR
    Dado(int id){
		codigo = (time(NULL) % 1000 + 1)*id; // função hash implementada aqui
	}
};

#endif



















