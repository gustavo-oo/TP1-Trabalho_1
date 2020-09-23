#include "dominios.h"
#include <string>

//Funcoes da Classe: Cep
void Cep::ValidarCep(int valor){
    if ((kIntervalosPossiveisSaoPaulo[0][0] <= valor and valor <= kIntervalosPossiveisSaoPaulo[0][1]) or
        (kIntervalosPossiveisSaoPaulo[1][0] <= valor and valor <= kIntervalosPossiveisSaoPaulo[1][1])){
            return;
    }
    if(kIntervaloPossivelRioDeJaneiro[0] <= valor and valor <= kIntervaloPossivelRioDeJaneiro[1]){
        return;
    }
    if(kIntervaloPossivelBrasilia[0] <= valor and valor <= kIntervaloPossivelBrasilia[1]){
        return;
    }
    if(kIntervaloPossivelSalvador[0] <= valor and valor <= kIntervaloPossivelSalvador[1]){
        return;
    }
    if(kIntervaloPossivelFortaleza[0] <= valor and valor <= kIntervaloPossivelFortaleza[1]){
        return;
    }

    throw invalid_argument("Argumento Cep Invalido");
}

void Cep::SetCep(int valor){
    ValidarCep(valor);
    this->valor = valor;
}

//Funcoes da Classe: Classe

void Classe::ValidarClasse(string valor){
    if(valor == kValoresPossiveis[0] or valor == kValoresPossiveis[1] or
       valor == kValoresPossiveis[2] or valor == kValoresPossiveis[3]){
        return;
    }
    else{
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
        return;
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
        return;
    }else{
        throw invalid_argument("Argumento Codigo de Aplicacao Invalido");
    }
}

void CodigoDeAplicacao::SetCodigoDeAplicacao(string valor){
    ValidarCodigoDeAplicacao(valor);
    this->valor = valor;
}
