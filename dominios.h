#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

//Classe CEP

class Cep{
public:
    void SetCep(int valor);
    int GetCep();
private:
    int valor;
    constexpr static int kIntervalosPermitidosSaoPaulo[2][2] ={{1000000, 5999999} , {8000000, 8499999}};
    constexpr static int kIntervaloPermitidoRioDeJaneiro[2] = {20000000, 26600999};
    constexpr static int kIntervaloPermitidoBrasilia[2] = {70000000, 70999999};
    constexpr static int kIntervaloPermitidoSalvador[2] = {40000000, 41999999};
    constexpr static int kIntervaloPermitidoFortaleza[2] = {60000000, 60999999};

    void ValidarCep(int valor);
};

inline int Cep::GetCep(){
    return valor;
}

//Classe Classe

class Classe{
public:
    void SetClasse(string valor);
    string GetClasse();
private:
    string valor;
    inline const static string kValoresPermitidos[5] = {"CDB", "LCA", "LCI", "LF", "LC"};

    void ValidarClasse(string valor);
};

inline string Classe::GetClasse(){
    return valor;
}

//Classe Codigo de Agencia

class CodigoDeAgencia{
public:
    void SetCodigoDeAgencia(string valor);
    string GetCodigoDeAgencia();
private:
    string valor;
    const static int kTamanhoDoValor = 4;
    inline const static string ValorNaoPermitido = "0000";

    void ValidarCodigoDeAgencia(string valor);
};

inline string CodigoDeAgencia::GetCodigoDeAgencia(){
    return valor;
}

//Classe Codigo de Aplicacao

class CodigoDeAplicacao{
public:
    void SetCodigoDeAplicacao(string valor);
    string GetCodigoDeAplicacao();
private:
    string valor;
    const static int kTamanhoDoValor = 5;
    inline const static string ValorNaoPermitido = "00000";

    void ValidarCodigoDeAplicacao(string valor);
};

inline string CodigoDeAplicacao::GetCodigoDeAplicacao(){
    return valor;
}

//Classe Codigo de Banco

class CodigoDeBanco{
public:
    void SetCodigoDeBanco(int valor);
    int GetCodigoDeBanco();
private:
    int valor;
    constexpr static int kValoresPermitidos[5] = {341, 001, 237, 104, 033}; //Itau, BB, Bradesco, Caixa, Santander

    void ValidarCodigoDeBanco(int valor);
};

inline int CodigoDeBanco::GetCodigoDeBanco(){
    return valor;
}

//Classe Codigo de Produto

class CodigoDeProduto{
public:
    void SetCodigoDeProduto(string valor);
    string GetCodigoDeProduto();
private:
    string valor;
    const static int kTamanhoDoValor = 3;
    inline const static string kValorNaoPermitido = "000";

    void ValidarCodigoDeProduto(string valor);
};

inline string CodigoDeProduto::GetCodigoDeProduto(){
    return valor;
}

//Classe CPF

class Cpf{
public:
    void SetCpf(string valor);
    string GetCpf();
private:
    string valor;
    const static int kTamanhoDoValor = 14;
    const static int kModulo = 11;
    const static int kPosicaoPonto1 = 3;
    const static int kPosicaoPonto2 = 7;
    const static int kPosicaoHifen = 11;

    void ValidarCpf(string valor);
};

inline string Cpf::GetCpf(){
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
