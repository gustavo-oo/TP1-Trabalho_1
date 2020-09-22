#include "testes.h"
#include "dominios.h"

//Funções de Teste: Classe Cep
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
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCep::failureTest(){
    try{
        cep->setCep(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument &excecao){
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

//Funções de Teste: Classe Classe

void TUClasse::create(){
    classe = new Classe();
    estado = true;
}

void TUClasse::destroy(){
    delete classe;
}

void TUClasse::sucessTest(){
    try{
        classe->setClasse(VALOR_VALIDO);
        if(classe->getClasse() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUClasse::failureTest(){
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUClasse::run(){
    create();
    sucessTest();
    failureTest();
    destroy();
    return estado;
}

