#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

//Classe de Teste da Classe Cep
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

//Classe de Teste da Classe Classe
class TUClasse{
    Classe *classe;
    bool estado;
    inline const static string VALOR_VALIDO = "LCA";
    inline const static string VALOR_INVALIDO = "ABC";

    void create();
    void destroy();
    void sucessTest();
    void failureTest();

public:
    bool run();
};

#endif // TESTES_H_INCLUDED
