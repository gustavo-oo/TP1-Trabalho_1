#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

class Aplicacao{
public:

    void SetCodigo(CodigoDeAplicacao &codigo);
    CodigoDeAplicacao GetCodigo();

    void SetValor(ValorDeAplicacao &valor);
    ValorDeAplicacao GetValor();

    void SetData(Data &data);
    Data GetData();

private:

    CodigoDeAplicacao codigo;
    ValorDeAplicacao valor;
    Data data;

};

#endif // ENTIDADES_H_INCLUDED
