#include "dominios.h"

//Funções da Classe: Cep
void Cep::validarCep(int valor) throw(invalid_argument){
    if ((VALOR_MINIMO_SP_1 <= valor and valor <= VALOR_MAXIMO_SP_1) or
         (VALOR_MAXIMO_SP_2 <= valor and valor <= VALOR_MAXIMO_SP_2)){
            return;
    }
    if(VALOR_MINIMO_RJ <= valor and valor <= VALOR_MAXIMO_RJ){
        return;
    }
    if(VALOR_MINIMO_BR <= valor and valor <= VALOR_MAXIMO_BR){
        return;
    }
    if(VALOR_MINIMO_SA <= valor and valor <= VALOR_MAXIMO_SA){
        return;
    }
    if(VALOR_MINIMO_FO <= valor and valor <= VALOR_MAXIMO_FO){
        return;
    }

    throw invalid_argument("Argumento Cep Inválido");
}

void Cep::setCep(int valor) throw(invalid_argument){
    validarCep(valor);
    this->valor = valor;
}

//Funções da Classe: Classe

void Classe::validarClasse(string valor) throw(invalid_argument){
    if(valor == VALOR_CDB or valor == VALOR_LC or valor == VALOR_LCA or valor == VALOR_LF){
        return;
    }
    else{
        throw invalid_argument("Argumento Classe Inválido");
    }
}

void Classe::setClasse(string valor) throw(invalid_argument){
    validarClasse(valor);
    this->valor = valor;
}
