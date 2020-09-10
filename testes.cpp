#include "testes.h"
#include "dominios.h"

void TUCep::create(){
    cep = new Cep();
    estado = true;
}

void TUCep::destroy(){
    delete cep;
}

void TUCep::sucessTest(){
    try{
        cep->setCep(VALOR_VALIDO);
        if(cep->getCep() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument excecao){
        estado = false;
    }
}

void TUCep::failureTest(){
    try{
        cep->setCep(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument excecao){
        return;
    }
}

bool TUCep::run(){
    create();
    sucessTest();
    failureTest();
    destroy();
    return estado;
}
