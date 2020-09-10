#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

class TUCep{
private:
    Cep *cep;
    bool estado;
    const static int VALOR_VALIDO = 3000000;
    const static int VALOR_INVALIDO = 65999999;

    void create();
    void destroy();
    void sucessTest();
    void failureTest();

public:
    bool run();
};

#endif // TESTES_H_INCLUDED
