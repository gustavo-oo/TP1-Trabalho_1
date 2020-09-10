#include "dominios.h"

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

    throw invalid_argument("Invalid Argument");
}

void Cep::setCep(int valor) throw(invalid_argument){
    validarCep(valor);
    this->valor = valor;
}
