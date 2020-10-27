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

class TUConta{
private:
    Conta *conta;

    CodigoDeBanco banco_valido;
    const static int kBancoValido = 341;

    CodigoDeAgencia agencia_valida;
    inline const static string kAgenciaValida = "1111";

    Numero numero_valido;
    inline const static string kNumeroValido = "123456-0";

    bool estado;

    void Create();
    void Destroy();
    void BancoTest();
    void AgenciaTest();
    void NumeroTest();

public:
    bool Run();
};

class TUProduto{
private:
    Produto *produto;

    CodigoDeProduto codigo_valido;
    inline const static string kCodigoValido = "789";

    Classe classe_valida;
    inline const static string kClasseValida = "LCA";

    Emissor emissor_valido;
    inline const static string kEmissorValido = "Emissor05 - Teste . 2a";

    Prazo prazo_valido;
    const static int kPrazoValido = 18;

    Data vencimento_valido;
    inline const static string kVencimentoValido = "11/01/2021";

    Taxa taxa_valida;
    constexpr static double kTaxaValida = 23.78;

    Horario horario_valido;
    inline const static string kHorarioValido = "13:00";

    ValorMinimo valor_valido;
    constexpr static double kValorValido = 50000;

    bool estado;

    void Create();
    void Destroy();
    void CodigoTest();
    void ClasseTest();
    void EmissorTest();
    void PrazoTest();
    void VencimentoTest();
    void TaxaTest();
    void HorarioTest();
    void ValorTest();


public:
    bool Run();
};

class TUUsuario{
private:
    Usuario *usuario;

    Nome nome_valido;
    inline const static string kNomeValido = "Joao Da Silva";

    Endereco endereco_valido;
    inline const static string kEnderecoValido = "Rua 8 St . N";

    Cep cep_valido;
    const static int kCepValido = 3000000;

    Cpf cpf_valido;
    inline const static string kCpfValido = "123.456.789-09";

    Senha senha_valida;
    inline const static string kSenhaValida = "123456";

    bool estado;

    void Create();
    void Destroy();
    void NomeTest();
    void EnderecoTest();
    void CepTest();
    void CpfTest();
    void SenhaTest();

public:
    bool Run();

};


#endif // TESTES_ENTIDADES_INCLUDED
