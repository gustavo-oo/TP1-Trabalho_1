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

class Conta{
public:

    void SetBanco(CodigoDeBanco &banco);
    CodigoDeBanco GetBanco();

    void SetAgencia(CodigoDeAgencia &agencia);
    CodigoDeAgencia GetAgencia();

    void SetNumero(Numero &numero);
    Numero GetNumero();

private:

    CodigoDeBanco banco;
    CodigoDeAgencia agencia;
    Numero numero;

};

#endif // ENTIDADES_H_INCLUDED
