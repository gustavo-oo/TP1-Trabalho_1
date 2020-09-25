#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

//Classe de Teste: Cep
class TUCep{
private:
    Cep *cep;
    bool estado;
    const static int kValorValido = 3000000;
    const static int kValorInvalido = 65999999;

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
    inline const static string kValorValido = "LCA";
    inline const static string kValorInvalido = "ABC";

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
    inline const static string kValorValido = "1578";
    inline const static string kValorInvalido = "0000";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Codigo de Aplicacao
class TUCodigoDeAplicacao{
    CodigoDeAplicacao *codigo_de_aplicacao;
    bool estado;
    inline const static string kValorValido = "01234";
    inline const static string kValorInvalido = "00000";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Codigo de Banco
class TUCodigoDeBanco{
    CodigoDeBanco *codigo_de_banco;
    bool estado;
    const static int kValorValido = 001;
    const static int kValorInvalido = 563;

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Codigo de Produto
class TUCodigoDeProduto{
    CodigoDeProduto *codigo_de_produto;
    bool estado;
    inline const static string kValorValido = "789";
    inline const static string kValorInvalido = "000";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Cpf
class TUCpf{
private:
    Cpf *cpf;
    bool estado;
    inline const static string kValorValido = "123.456.789-09";
    inline const static string kValorInvalido = "123.456.789-10";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};


#endif // TESTES_H_INCLUDED
