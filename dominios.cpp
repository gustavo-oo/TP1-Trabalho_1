#include "dominios.h"
#include <string>

//Funcoes da Classe: Cep
void Cep::ValidarCep(int valor){
    switch(valor){
    case kIntervalosPermitidosSaoPaulo[0][0] ... kIntervalosPermitidosSaoPaulo[0][1]:
    case kIntervalosPermitidosSaoPaulo[1][0] ... kIntervalosPermitidosSaoPaulo[1][1]:
    case kIntervaloPermitidoBrasilia[0] ... kIntervaloPermitidoBrasilia[1]:
    case kIntervaloPermitidoFortaleza[0] ... kIntervaloPermitidoFortaleza[1]:
    case kIntervaloPermitidoRioDeJaneiro[0] ... kIntervaloPermitidoRioDeJaneiro[1]:
        return;
    default:
        throw invalid_argument("Argumento Cep Invalido");
    }
}

void Cep::SetCep(int valor){
    ValidarCep(valor);
    this->valor = valor;
}

//Funcoes da Classe: Classe

void Classe::ValidarClasse(string valor){
    if(valor != kValoresPermitidos[0] and valor != kValoresPermitidos[1] and
       valor != kValoresPermitidos[2] and valor != kValoresPermitidos[3]){
        throw invalid_argument("Argumento Classe Invalido");
    }
}

void Classe::SetClasse(string valor){
    ValidarClasse(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Agencia

void CodigoDeAgencia::ValidarCodigoDeAgencia(string valor){
    if( valor.length() == kTamanhoDoValor and valor != ValorNaoPermitido){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i])){
                throw invalid_argument("Argumento Codigo de Agencia Invalido");
            }
        }
    }else{
        throw invalid_argument("Argumento Codigo de Agencia Invalido");
    }
}

void CodigoDeAgencia::SetCodigoDeAgencia(string valor){
    ValidarCodigoDeAgencia(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Aplicacao

void CodigoDeAplicacao::ValidarCodigoDeAplicacao(string valor){
    if( valor.length() == kTamanhoDoValor and valor != ValorNaoPermitido){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i])){
                throw invalid_argument("Argumento Codigo de Aplicacao Invalido");
            }
        }
    }else{
        throw invalid_argument("Argumento Codigo de Aplicacao Invalido");
    }
}

void CodigoDeAplicacao::SetCodigoDeAplicacao(string valor){
    ValidarCodigoDeAplicacao(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Banco

void CodigoDeBanco::ValidarCodigoDeBanco(int valor){
    switch(valor){
    case kValoresPermitidos[0]:
    case kValoresPermitidos[1]:
    case kValoresPermitidos[2]:
    case kValoresPermitidos[3]:
    case kValoresPermitidos[4]:
        return;
    default:
        throw invalid_argument("Argumento Codigo de Banco Invalido");
    }
}

void CodigoDeBanco::SetCodigoDeBanco(int valor){
    ValidarCodigoDeBanco(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Produto

void CodigoDeProduto::ValidarCodigoDeProduto(string valor){
    if( valor.length() == kTamanhoDoValor and valor != ValorNaoPermitido){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i])){
                throw invalid_argument("Argumento Codigo de Produto Invalido");
            }
        }
    }else{
        throw invalid_argument("Argumento Codigo de Produto Invalido");
    }
}

void CodigoDeProduto::SetCodigoDeProduto(string valor){
    ValidarCodigoDeProduto(valor);
    this->valor = valor;
}

