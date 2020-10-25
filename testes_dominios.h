#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED

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

//Classe de Teste: Data
class TUData{
private:
    Data *data;
    bool estado;
    inline const static string kValorValido = "29/02/2020";
    inline const static string kValorInvalido = "29/02/2062";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Emissor
class TUEmissor{
private:
    Emissor *emissor;
    bool estado;
    inline const static string kValorValido = "Emissor05 - Teste . 2a";
    inline const static string kValorInvalido = "Teste  -02";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Endereco
class TUEndereco{
private:
    Endereco *endereco;
    bool estado;
    inline const static string kValorValido = "Rua 8 St . N";
    inline const static string kValorInvalido = "Endereco*Invalido";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Horario
class TUHorario{
private:
    Horario *horario;
    bool estado;
    inline const static string kValorValido = "13:00";
    inline const static string kValorInvalido = "17:01";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Nome
class TUNome{
private:
    Nome *nome;
    bool estado;
    inline const static string kValorValido = "Joao Da Silva";
    inline const static string kValorInvalido = "Nome  errado";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Numero
class TUNumero{
private:
    Numero *numero;
    bool estado;
    inline const static string kValorValido = "123456-0";
    inline const static string kValorInvalido = "123456-7";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Prazo
class TUPrazo{
private:
    Prazo *prazo;
    bool estado;
    const static int kValorValido = 18;
    const static int kValorInvalido = 20;

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Senha
class TUSenha{
private:
    Senha *senha;
    bool estado;
    inline const static string kValorValido = "123456";
    inline const static string kValorInvalido = "A23456";

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Senha
class TUTaxa{
    Taxa *taxa;
    bool estado;
    constexpr static double kValorValido = 23.78;
    constexpr static double kValorInvalido = 201;

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Valor de Aplicação
class TUValorDeAplicacao{
    ValorDeAplicacao *valor_de_aplicacao;
    bool estado;
    constexpr static double kValorValido = 999999;
    constexpr static double kValorInvalido = 1000001;

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

//Classe de Teste: Valor Mínimo
class TUValorMinimo{
    ValorMinimo *valor_minimo;
    bool estado;
    constexpr static double kValorValido = 50000;
    constexpr static double kValorInvalido = 500;

    void Create();
    void Destroy();
    void SucessTest();
    void FailureTest();

public:
    bool Run();
};

#endif // TESTES_DOMINIOS_H_INCLUDED
