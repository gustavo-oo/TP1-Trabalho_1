#include <iostream>

#include "dominios.h"
#include "testes.h"


using namespace std;

int main(){
    TUCep teste_cep;
    TUClasse teste_classe;
    TUCodigoDeAgencia teste_codigo_de_agencia;
    TUCodigoDeAplicacao teste_codigo_de_aplicacao;

    //Confirmacao Teste: Cep
    cout << "Teste da Classe Cep: ";
    if(teste_cep.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Classe
    cout << "Teste da Classe Classe: ";
    if(teste_classe.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Codigo de Agencia
    cout << "Teste da Classe Codigo de Agencia: ";
    if(teste_codigo_de_agencia.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Codigo de Aplicacao
    cout << "Teste da Classe Codigo de Aplicacao: ";
    if(teste_codigo_de_aplicacao.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    return 0;
}
