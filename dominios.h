#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de CEP.
///
/// <b> Regras de formato: </b>
///
/// - Valores nos intervalos seguintes s&atilde;o considerados v&aacute;lidos: <br>
/// <b>(1000000 at&eacute; 5999999)</b> e <b>(8000000 at&eacute; 8499999)</b> - S&atilde;o Paulo <br>
/// <b>(20000000 at&eacute; 26600999)</b> - Rio de Janeiro <br>
/// <b>(70000000 at&eacute; 70999999)</b> - Bras&iacute;lia <br>
/// <b>(40000000 at&eacute; 41999999)</b> - Salvador <br>
/// <b>(60000000 at&eacute; 60999999)</b> - Fortaleza
///


class Cep{
public:
    ///
    /// Armazena valor de CEP caso seja v&aacute;lido.
    ///
    /// @param valor CEP
    ///
    /// @throw invalid_argument
    ///

    void SetCep(int valor);

    ///
    /// Retorna valor de CEP.
    ///
    /// @return valor CEP
    ///

    int GetCep();
private:
    int valor;
    constexpr static int kIntervalosPermitidosSaoPaulo[2][2] ={{1000000, 5999999} , {8000000, 8499999}};
    constexpr static int kIntervaloPermitidoRioDeJaneiro[2] = {20000000, 26600999};
    constexpr static int kIntervaloPermitidoBrasilia[2] = {70000000, 70999999};
    constexpr static int kIntervaloPermitidoSalvador[2] = {40000000, 41999999};
    constexpr static int kIntervaloPermitidoFortaleza[2] = {60000000, 60999999};

    ///
    /// Verifica se o valor informado corresponde a um CEP v&aacute;lido.
    ///
    /// @param valor CEP
    ///
    /// @throw invalid_argument
    ///
    void ValidarCep(int valor);
};

inline int Cep::GetCep(){
    return valor;
}

//Classe Classe

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Classe.
///
/// <b> Regras de formato: </b>
///
/// - Os seguintes valores s&atilde;o considerados v&aacute;lidos: <br>
/// <b>CDB, LCA, LCI, LF e LC.</b>
///

class Classe{
public:

    ///
    /// Armazena valor de Classe caso seja v&aacute;lido.
    ///
    /// @param valor Classe
    ///
    /// @throw invalid_argument
    ///

    void SetClasse(string valor);

    ///
    /// Retorna valor de Classe.
    ///
    /// @return valor Classe
    ///

    string GetClasse();
private:
    string valor;
    inline const static string kValoresPermitidos[5] = {"CDB", "LCA", "LCI", "LF", "LC"};

    ///
    /// Verifica se o valor informado corresponde a uma Classe v&aacute;lida.
    ///
    /// @param valor Classe
    ///
    /// @throw invalid_argument
    ///

    void ValidarClasse(string valor);
};

inline string Classe::GetClasse(){
    return valor;
}

//Classe Codigo de Agencia

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de C&oacute;digo de Ag&ecirc;ncia.
///
/// <b> Regras de formato: </b>
///
/// - Valores de <b>4 d&iacute;gitos num&eacute;ricos, excluindo 0000</b>, s&atilde;o considerados v&aacute;lidos.
///

class CodigoDeAgencia{
public:

    ///
    /// Armazena valor de C&oacute;digo de Ag&ecirc;ncia caso seja v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Ag&ecirc;ncia
    ///
    /// @throw invalid_argument
    ///

    void SetCodigoDeAgencia(string valor);

    ///
    /// Retorna valor de C&oacute;digo de Ag&ecirc;ncia.
    ///
    /// @return valor C&oacute;digo de Ag&ecirc;ncia
    ///

    string GetCodigoDeAgencia();
private:
    string valor;
    const static int kTamanhoDoValor = 4;
    inline const static string ValorNaoPermitido = "0000";

    ///
    /// Verifica se o valor informado corresponde a um C&oacute;digo de Ag&ecirc;ncia v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Ag&ecirc;ncia
    ///
    /// @throw invalid_argument
    ///

    void ValidarCodigoDeAgencia(string valor);
};

inline string CodigoDeAgencia::GetCodigoDeAgencia(){
    return valor;
}

//Classe Codigo de Aplicacao

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de C&oacute;digo de Aplica&ccedil;&atilde;o.
///
/// <b> Regras de formato: </b>
///
/// - Valores de <b>5 d&iacute;gitos num&eacute;ricos, excluindo 00000</b>, s&atilde;o considerados v&aacute;lidos.
///

class CodigoDeAplicacao{
public:
    ///
    /// Armazena valor de C&oacute;digo de Aplica&ccedil;&atilde;o caso seja v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Aplica&ccedil;&atilde;o
    ///
    /// @throw invalid_argument
    ///

    void SetCodigoDeAplicacao(string valor);

    ///
    /// Retorna valor de C&oacute;digo de Aplica&ccedil;&atilde;o.
    ///
    /// @return valor C&oacute;digo de Aplica&ccedil;&atilde;o
    ///

    string GetCodigoDeAplicacao();
private:
    string valor;
    const static int kTamanhoDoValor = 5;
    inline const static string ValorNaoPermitido = "00000";

    ///
    /// Verifica se o valor informado corresponde a um C&oacute;digo de Aplica&ccedil;&atilde;o v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Aplica&ccedil;&atilde;o
    ///
    /// @throw invalid_argument
    ///

    void ValidarCodigoDeAplicacao(string valor);
};

inline string CodigoDeAplicacao::GetCodigoDeAplicacao(){
    return valor;
}

//Classe Codigo de Banco

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de C&oacute;digo de Banco.
///
/// <b> Regras de formato: </b>
///
/// - Os seguintes valores s&atilde;o considerados v&aacute;lidos: <br>
/// <b>341</b> - Ita&uacute; <br>
/// <b>001</b> - Banco do Brasil <br>
/// <b>237</b> - Banco Bradesco <br>
/// <b>104</b> - Caixa Econ&ocirc;mica <br>
/// <b>033</b> - Santander
///

class CodigoDeBanco{
public:

    ///
    /// Armazena valor de C&oacute;digo de Banco caso seja v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Banco
    ///
    /// @throw invalid_argument
    ///

    void SetCodigoDeBanco(int valor);

    ///
    /// Retorna valor de C&oacute;digo de Banco.
    ///
    /// @return valor C&oacute;digo de C&oacute;digo de Banco
    ///

    int GetCodigoDeBanco();
private:
    int valor;
    constexpr static int kValoresPermitidos[5] = {341, 001, 237, 104, 033}; //Itau, BB, Bradesco, Caixa, Santander

    ///
    /// Verifica se o valor informado corresponde a um C&oacute;digo de Banco v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Banco
    ///
    /// @throw invalid_argument
    ///

    void ValidarCodigoDeBanco(int valor);
};

inline int CodigoDeBanco::GetCodigoDeBanco(){
    return valor;
}

//Classe Codigo de Produto

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de C&oacute;digo de Produto.
///
/// <b> Regras de formato: </b>
///
/// - Valores de <b>3 d&iacute;gitos num&eacute;ricos, excluindo 000</b>, s&atilde;o considerados v&aacute;lidos.
///

class CodigoDeProduto{
public:

    ///
    /// Armazena valor de C&oacute;digo de Produto caso seja v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Produto
    ///
    /// @throw invalid_argument
    ///

    void SetCodigoDeProduto(string valor);

    ///
    /// Retorna valor de C&oacute;digo de Produto.
    ///
    /// @return valor C&oacute;digo de Produto.
    ///

    string GetCodigoDeProduto();
private:
    string valor;
    const static int kTamanhoDoValor = 3;
    inline const static string kValorNaoPermitido = "000";

    ///
    /// Verifica se o valor informado corresponde a um C&oacute;digo de Produto v&aacute;lido.
    ///
    /// @param valor C&oacute;digo de Produto
    ///
    /// @throw invalid_argument
    ///

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

//Classe Data

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Data.
///
/// <b> Regras de formato: </b>
///
/// - <b> dd/mm/aaaa </b>, em que <b>"dd"</b> corresponde ao dia <b>(1 at&eacute; 31)</b>, <b>"mm"</b> o m&ecirc;s <b>(1 at&eacute; 12)</b>, e <b>"aaaa"</b> o ano <b>(2020 at&eacute; 2099)</b>.
/// - S&atilde;o considerados anos bissextos.
///

class Data{
public:

    ///
    /// Armazena valor de Data caso seja v&aacute;lido.
    ///
    /// @param valor Data
    ///
    /// @throw invalid_argument
    ///

    void SetData(string valor);

    ///
    /// Retorna valor de Data.
    ///
    /// @return valor Data.
    ///

    string GetData();
private:
    string valor;
    const static int kTamanhoDoValor = 10;
    constexpr static int kMes31Dias[7] = {1, 3, 5, 7, 8, 10, 12};
    constexpr static int kMes30Dias[4] = {4, 6, 9, 11};
    constexpr static int kIntervaloAnosPermitidos[2] = {2020, 2099};
    const static int kPosicaoBarra1 = 2;
    const static int kPosicaoBarra2 = 4;

    ///
    /// Verifica se o valor informado corresponde a uma Data v&aacute;lida.
    ///
    /// @param valor Data
    ///
    /// @throw invalid_argument
    ///

    void ValidarData(string valor);
};

inline string Data::GetData(){
    return valor;
}

//Classe Emissor

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Emissor.
///
/// <b> Regras de formato: </b>
///
/// - Texto de <b>5 &agrave; 30 caracteres</b>, sendo aceitas <b>letras mai&uacute;sculas e min&uacute;sculas, d&iacute;gitos de 0 &agrave; 9</b>, e caracteres especiais <b>" - ", ponto e espa&ccedil;o.</b>
/// - S&oacute; podem haver <b>letras e d&iacute;gitos em sequ&ecirc;ncia.</b>
/// - Em termos cujo <b>primeiro caractere &eacute; uma letra</b>, esta <b>deve ser escrita em mai&uacute;scula.</b>
///

class Emissor{
public:

    ///
    /// Armazena valor de Emissor caso seja v&aacute;lido.
    ///
    /// @param valor Emissor
    ///
    /// @throw invalid_argument
    ///

    void SetEmissor(string valor);

    ///
    /// Retorna valor de Emissor.
    ///
    /// @return valor Emissor.
    ///

    string GetEmissor();
private:
    string valor;
    constexpr static int kIntervaloDeCaracteres[2] = {5, 30};
    const static char kHifen = '-';
    const static char kPonto = '.';
    const static char kEspaco = ' ';

    ///
    /// Verifica se o valor informado corresponde a um Emissor v&aacute;lido.
    ///
    /// @param valor Emissor
    ///
    /// @throw invalid_argument
    ///

    void ValidarEmissor(string valor);
};

inline string Emissor::GetEmissor(){
    return valor;
}

//Classe Endereco

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Endere&ccedil;o.
///
/// <b> Regras de formato: </b>
///
/// - Texto de <b>5 &agrave; 20 caracteres </b>, sendo aceitas <b>letras mai&uacute;sculas e min&uacute;sculas, d&iacute;gitos de 0 &agrave; 9</b>, e caracteres especiais <b>ponto e espa&ccedil;o.</b>
/// - S&oacute; podem haver <b>letras e d&iacute;gitos em sequ&ecirc;ncia.</b>
/// - Em termos cujo <b>primeiro caractere &eacute; uma letra</b>, esta <b>deve ser escrita em mai&uacute;scula.</b>
///

class Endereco{
public:

    ///
    /// Armazena valor de Endere&ccedil;o caso seja v&aacute;lido.
    ///
    /// @param valor Endere&ccedil;o
    ///
    /// @throw invalid_argument
    ///

    void SetEndereco(string valor);

    ///
    /// Retorna valor de Endere&ccedil;o.
    ///
    /// @return valor Endere&ccedil;o.
    ///

    string GetEndereco();
private:
    string valor;
    constexpr static int kIntervaloDeCaracteres[2] = {5, 20};
    const static char kPonto = '.';
    const static char kEspaco = ' ';

    ///
    /// Verifica se o valor informado corresponde a um Endere&ccedil;o v&aacute;lido.
    ///
    /// @param valor Endere&ccedil;o
    ///
    /// @throw invalid_argument
    ///

    void ValidarEndereco(string valor);
};

inline string Endereco::GetEndereco(){
    return valor;
}

//Classe Horário

class Horario{
public:
    void SetHorario(string valor);
    string GetHorario();
private:
    string valor;
    const static int kTamanhoDoValor = 5;
    const static int kPosicao2Pontos = 2;
    const static int kHoraMin = 13;
    const static int kHoraMax = 17;

    void ValidarHorario(string valor);
};

inline string Horario::GetHorario(){
    return valor;
}

//Classe Nome

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Nome.
///
/// <b> Regras de formato: </b>
///
/// - Texto de <b>5 &agrave; 30 caracteres </b>, sendo aceitas <b>letras mai&uacute;sculas e min&uacute;sculas</b>, al&eacute;m do caractere especial <b>espa&ccedil;o</b></b>.
/// - Primeira letra de cada termo deve ser <b>mai&uacute;scula</b>.
///

class Nome{
public:

    ///
    /// Armazena valor de Nome caso seja v&aacute;lido.
    ///
    /// @param valor Nome
    ///
    /// @throw invalid_argument
    ///

    void SetNome(string valor);

    ///
    /// Retorna valor de Nome.
    ///
    /// @return valor Nome.
    ///

    string GetNome();
private:
    string valor;
    constexpr static int kIntervaloDeCaracteres[2] = {5, 30};
    const static char kEspaco = ' ';

    ///
    /// Verifica se o valor informado corresponde a um Nome v&aacute;lido.
    ///
    /// @param valor Nome
    ///
    /// @throw invalid_argument
    ///

    void ValidarNome(string valor);
};

inline string Nome::GetNome(){
    return valor;
}

//Classe Número

class Numero{
public:
    void SetNumero(string valor);
    string GetNumero();

private:
    string valor;
    const static int kTamanhoDoValor = 8;
    const static int kPosicaoHifen = 6;
    const static int kModulo = 11;

    void ValidarNumero(string valor);
};

inline string Numero::GetNumero(){
    return valor;
}

//Classe Prazo

class Prazo{
public:
    void SetPrazo(int valor);
    int GetPrazo();
private:
    int valor;
    constexpr static int kValoresPermitidos[12] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72};

    void ValidarPrazo(int valor);
};

inline int Prazo::GetPrazo(){
    return valor;
}

//Classe Senha

class Senha{
public:
    void SetSenha(string valor);
    string GetSenha();
private:
    string valor;
    const static int kTamanhoDoValor = 6;

    void ValidarSenha(string valor);
};

inline string Senha::GetSenha(){
    return valor;
}

//Classe Taxa

class Taxa{
public:
    void SetTaxa(double valor);
    double GetTaxa();
private:
    double valor;
    const static int kValorMax = 200;
    const static int kValorMin = 0;

    void ValidarTaxa(double valor);
};

inline double Taxa::GetTaxa(){
    return valor;
}

//Classe Valor de Aplicação

class ValorDeAplicacao{
public:
    void SetValorDeAplicacao(double valor);
    double GetValorDeAplicacao();
private:
    double valor;
    const static int kValorMax = 1000000;
    const static int kValorMin = 0;

    void ValidarValorDeAplicacao(double valor);
};

inline double ValorDeAplicacao::GetValorDeAplicacao(){
    return valor;
}

//Classe Valor Mínimo

class ValorMinimo{
public:
    void SetValorMinimo(double valor);
    double GetValorMinimo();
private:
    double valor;
    constexpr static double kValoresPermitidos[4] = {1000, 5000, 10000, 50000};

    void ValidarValorMinimo(double valor);
};

inline double ValorMinimo::GetValorMinimo(){
    return valor;
}


#endif // DOMINIOS_H_INCLUDED
