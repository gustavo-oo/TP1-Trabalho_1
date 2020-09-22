#include "testes.h"
#include "dominios.h"

//Funcoes de Teste: Cep
void TUCep::Create(){
    cep = new Cep();
    estado = true;
}

void TUCep::Destroy(){
    delete cep;
}

void TUCep::SucessTest(){
    try{
        cep->SetCep(VALOR_VALIDO);
        if(cep->GetCep() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCep::FailureTest(){
    try{
        cep->SetCep(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCep::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Classe

void TUClasse::Create(){
    classe = new Classe();
    estado = true;
}

void TUClasse::Destroy(){
    delete classe;
}

void TUClasse::SucessTest(){
    try{
        classe->SetClasse(VALOR_VALIDO);
        if(classe->GetClasse() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUClasse::FailureTest(){
    try{
        classe->SetClasse(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUClasse::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Codigo de Agencia

void TUCodigoDeAgencia::Create(){
    codigo_de_agencia = new CodigoDeAgencia();
    estado = true;
}

void TUCodigoDeAgencia::Destroy(){
    delete codigo_de_agencia;
}

void TUCodigoDeAgencia::SucessTest(){
    try{
        codigo_de_agencia->SetCodigoDeAgencia(VALOR_VALIDO);
        if(codigo_de_agencia->GetCodigoDeAgencia() != VALOR_VALIDO){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeAgencia::FailureTest(){
    try{
        codigo_de_agencia->SetCodigoDeAgencia(VALOR_INVALIDO);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCodigoDeAgencia::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}


