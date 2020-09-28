#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de CEP
///
/// Regras de formato:
///
/// - Valores nos intervalos: <br>
/// (1000000 at&eacute; 5999999) e (8000000 at&eacute; 8499999) - S&atilde;o Paulo <br>
/// (20000000 at&eacute; 26600999) - Rio de Janeiro <br>
/// (70000000 at&eacute; 70999999) - Bras&iacute;lia <br>
/// (40000000 at&eacute; 41999999) - Salvador <br>
/// (60000000 at&eacute; 60999999) - Fortaleza
///


class Cep{
public:
    ///
    /// Armazena CEP
    ///
    /// @param valor de CEP
    ///
    /// @throw invalid_argument
    ///
    void SetCep(int valor);

    ///
    /// Retorna valor de CEP
    ///
    /// @return valor
    ///

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

//Classe CPF

class Data{
public:
    void SetData(string valor);
    string GetData();
private:
    string valor;
    const static int kTamanhoDoValor = 10;
    constexpr static int kMes31Dias[7] = {1, 3, 5, 7, 8, 10, 12};
    constexpr static int kMes30Dias[4] = {4, 6, 9, 11};
    constexpr static int kIntervaloAnosPermitidos[2] = {2020, 2099};
    const static int kPosicaoBarra1 = 2;
    const static int kPosicaoBarra2 = 4;

    void ValidarData(string valor);
};

inline string Data::GetData(){
    return valor;
}

//Classe Emissor

class Emissor{
public:
    void SetEmissor(string valor);
    string GetEmissor();
private:
    string valor;
    constexpr static int kIntervaloDeCaracteres[2] = {5, 30};
    const static char kHifen = '-';
    const static char kPonto = '.';
    const static char kEspaco = ' ';

    void ValidarEmissor(string valor);
};

inline string Emissor::GetEmissor(){
    return valor;
}

//Classe Endereco

class Endereco{
public:
    void SetEndereco(string valor);
    string GetEndereco();
private:
    string valor;
    constexpr static int kIntervaloDeCaracteres[2] = {5, 20};
    const static char kPonto = '.';
    const static char kEspaco = ' ';

    void ValidarEndereco(string valor);
};

inline string Endereco::GetEndereco(){
    return valor;
}

//Classe Nome

class Nome{
public:
    void SetNome(string valor);
    string GetNome();
private:
    string valor;
    constexpr static int kIntervaloDeCaracteres[2] = {5, 30};
    const static char kEspaco = ' ';

    void ValidarNome(string valor);
};

inline string Nome::GetNome(){
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
