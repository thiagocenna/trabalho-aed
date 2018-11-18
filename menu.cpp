// TRABALHO FINAL DE AED
// PROTOCOLO DE ROTEAMENTO
// Funcionalidade: Menu
// Responsavel: Daniel Gobbi
// Ultima vez editado: 18/11 21h

#include <iostream>
#include <string>

class Menu {
  public:
    void principal(){
        cout << "Bem vindo ao menu do seu roteador!\n";
        cout << "Selecione uma das opcoes a seguir:\n";
        while (opcao > 0 && opcao < 4){
            cout << "1) Ver dispositivos conectados a rede\n";
            cout << "2) Conectar um novo dispositivo\n";
            cout << "3) Enviar pacote\n";
            cout << "4) Sair\n";
            cin >> opcao;
        }
    }
}

int main(){
    int opcao = 1;


    return 0;
}
