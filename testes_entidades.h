#ifndef TESTES_ENTIDADES_INCLUDED
#define TESTES_ENTIDADES_INCLUDED

#include "entidades.h"
#include "dominios.h"

class TUAplicacao{
private:
    Aplicacao *aplicacao;

    CodigoDeAplicacao codigo_valido;
    inline const static string kCodigoValido = "99999";

    ValorDeAplicacao valor_valido;
    const static int kValorValido = 500;

    Data data_valida;
    inline const static string kDataValida = "11/01/2021";

    bool estado;

    void Create();
    void Destroy();
    void CodigoTest();
    void ValorTest();
    void DataTest();

public:
    bool Run();
};

#endif // TESTES_ENTIDADES_INCLUDED
