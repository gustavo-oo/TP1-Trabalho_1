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
        cep->SetCep(kValorValido);
        if(cep->GetCep() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCep::FailureTest(){
    try{
        cep->SetCep(kValorInvalido);
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
        classe->SetClasse(kValorValido);
        if(classe->GetClasse() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUClasse::FailureTest(){
    try{
        classe->SetClasse(kValorInvalido);
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
        codigo_de_agencia->SetCodigoDeAgencia(kValorValido);
        if(codigo_de_agencia->GetCodigoDeAgencia() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeAgencia::FailureTest(){
    try{
        codigo_de_agencia->SetCodigoDeAgencia(kValorInvalido);
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

//Funcoes de Teste: Codigo de Agencia

void TUCodigoDeAplicacao::Create(){
    codigo_de_aplicacao = new CodigoDeAplicacao();
    estado = true;
}

void TUCodigoDeAplicacao::Destroy(){
    delete codigo_de_aplicacao;
}

void TUCodigoDeAplicacao::SucessTest(){
    try{
        codigo_de_aplicacao->SetCodigoDeAplicacao(kValorValido);
        if(codigo_de_aplicacao->GetCodigoDeAplicacao() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeAplicacao::FailureTest(){
    try{
        codigo_de_aplicacao->SetCodigoDeAplicacao(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCodigoDeAplicacao::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}


