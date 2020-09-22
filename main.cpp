#include <iostream>

#include "dominios.h"
#include "testes.h"


using namespace std;

int main(){
    TUCep testeCep;
    TUClasse testeClasse;

    cout << "Teste da Classe Cep: ";
    if(testeCep.run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    cout << "Teste da Classe Classe: ";
    if(testeClasse.run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    return 0;
}
