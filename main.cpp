// TRABALHO FINAL DE AED
// PROTOCOLO DE ROTEAMENTO
// Funcionalidade: Menu
// Responsavel: Daniel Gobbi
// Ultima vez editado: 18/11 21h

#include <iostream>
#include <string>
#include "roteador_dado.hpp"
using namespace std;

int main(){
    int opcao = 1;
    int id = 0; // é um contador. será utilizado para distribuir id's para os roteadores
    int auxi; // inteiro auxiliar
    Dado *d;
    Roteador *r;

    cout << "Bem vindo ao menu do seu roteador!\n";
    cout << "Selecione uma das opcoes a seguir:\n";
    while (opcao > 0 && opcao < 4){
        cout << "1) Ver dispositivos conectados a rede\n";
        cout << "2) Conectar um novo dispositivo\n";
        cout << "3) Enviar pacote\n";
        cout << "4) Sair\n";
        cin >> opcao;

        switch(opcao){
            case 1:

                cout << endl;
                break;
            case 2:
                delete[] r;
                cout << "O novo dispositivo tem ID: " << id << "\nEm quantos roteadores ele está conectado? (contando com a internet)\n";
                cin >> auxi;
                for (int i = 0; i < auxi; ++i){
                    
                }
                cout << endl;
                break;
            case 3:
                delete[] d;
                cout << "Qual o destino do pacote que será enviado? (favor entrar o codigo do roteador)\n";
                cin >> auxi;
                d = new Dado(auxi);
                cout << endl;
                break;
        }
    }

    return 0;
}
