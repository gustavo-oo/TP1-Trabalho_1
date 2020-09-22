#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

//Classe de Teste: Cep
class TUCep{
private:
    Cep *cep;
    bool estado;
    const static int VALOR_VALIDO = 3000000;
    const static int VALOR_INVALIDO = 65999999;

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Classe
class TUClasse{
    Classe *classe;
    bool estado;
    inline const static string VALOR_VALIDO = "LCA";
    inline const static string VALOR_INVALIDO = "ABC";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Codigo de Agencia
class TUCodigoDeAgencia{
    CodigoDeAgencia *codigo_de_agencia;
    bool estado;
    inline const static string VALOR_VALIDO = "1578";
    inline const static string VALOR_INVALIDO = "0000";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

#endif // TESTES_H_INCLUDED
