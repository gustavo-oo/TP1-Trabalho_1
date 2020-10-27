#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

///
/// @file dominios.h
///

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
    /// @return valor C&oacute;digo de Banco
    ///

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

    void ValidarCodigoDeProduto(string valor);
};

inline string CodigoDeProduto::GetCodigoDeProduto(){
    return valor;
}

//Classe CPF

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de CPF.
///
/// <b> Regras de formato: </b>
///
/// - <b>XXX.XXX.XXX-XX</b>, em que <b>"X"</b> &eacute; d&iacute;gito num&eacute;rico(0 - 9), sendo os &uacute;ltimos dois os <b>d&iacute;gitos verificadores</b> do CPF.
/// - Algor&iacute;timo utilizado para calcular d&iacute;gitos verificadores pode ser encontrado em http://ghiorzi.org/DVnew.htm na se&ccedil;&atilde;o <b>notas</b>.
///

class Cpf{
public:

    ///
    /// Armazena valor de CPF caso seja v&aacute;lido.
    ///
    /// @param valor CPF
    ///
    /// @throw invalid_argument
    ///

    void SetCpf(string valor);

    ///
    /// Retorna valor de CPF.
    ///
    /// @return valor CPF
    ///

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
/// - <b> dd/mm/aaaa</b>, em que <b>"dd"</b> corresponde ao dia <b>(1 at&eacute; 31)</b>, <b>"mm"</b> o m&ecirc;s <b>(1 at&eacute; 12)</b>, e <b>"aaaa"</b> o ano <b>(2020 at&eacute; 2099)</b>.
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
/// - Texto de <b>5 &agrave; 20 caracteres</b>, sendo aceitas <b>letras mai&uacute;sculas e min&uacute;sculas, d&iacute;gitos de 0 &agrave; 9</b>, e caracteres especiais <b>ponto e espa&ccedil;o.</b>
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

    void ValidarEndereco(string valor);
};

inline string Endereco::GetEndereco(){
    return valor;
}

//Classe Horario


///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Hor&aacute;rio.
///
/// <b> Regras de formato: </b>
///
/// - <b> XY:ZW</b>, em que <b>"XY"</b> corresponde &agrave; hora <b>(13 at&eacute; 17)</b> e <b>"XW"</b> aos minutos<b> (00 at&eacute; 59)</b>.
///


class Horario{
public:

    ///
    /// Armazena valor de Hor&aacute;rio caso seja v&aacute;lido.
    ///
    /// @param valor Hor&aacute;rio
    ///
    /// @throw invalid_argument
    ///

    void SetHorario(string valor);

    ///
    /// Retorna valor de Hor&aacute;rio.
    ///
    /// @return valor Hor&aacute;rio.
    ///

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
/// - Texto de <b>5 &agrave; 30 caracteres</b>, sendo aceitas <b>letras mai&uacute;sculas e min&uacute;sculas</b>, al&eacute;m do caractere especial <b>espa&ccedil;o</b></b>.
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

    void ValidarNome(string valor);
};

inline string Nome::GetNome(){
    return valor;
}

//Classe Numero

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de N&uacute;mero.
///
/// <b> Regras de formato: </b>
///
/// - <b>XXXXXX-Y</b>, em que <b>"X"</b> e <b>"Y"</b> s&atilde;o d&iacute;gitos num&eacute;ricos(0 - 9).
/// - sendo <b>"Y"</b> o <b>d&iacute;gito verificador</b> do n&uacute;mero.
/// - Algor&iacute;timo utilizado para calcular d&iacute;gito verificador foi a <b>rotina do M&oacute;dulo 11</b>, cuja descri&ccedil;&atilde;o pode ser encontrada em https://pt.wikipedia.org/wiki/D%C3%ADgito_verificador#M%C3%B3dulo_11.
///

class Numero{
public:

    ///
    /// Armazena valor de N&uacute;mero caso seja v&aacute;lido.
    ///
    /// @param valor N&uacute;mero
    ///
    /// @throw invalid_argument
    ///

    void SetNumero(string valor);

    ///
    /// Retorna valor de N&uacute;mero.
    ///
    /// @return valor N&uacute;mero
    ///
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

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Prazo.
///
/// <b> Regras de formato: </b>
///
/// - Os seguintes valores, em meses, s&atilde;o considerados v&aacute;lidos: <b>6</b>, <b>12</b>, <b>18</b>, <b>24</b>, <b>30<b/>, <b>36</b>, <b>42</b>, <b>48</b>, <b>54</b>, <b>60</b>, <b>66</b> ou <b>72</b>
///

class Prazo{
public:

    ///
    /// Armazena valor de Prazo caso seja v&aacute;lido.
    ///
    /// @param valor Prazo
    ///
    /// @throw invalid_argument
    ///

    void SetPrazo(int valor);

    ///
    /// Retorna valor de Prazo.
    ///
    /// @return valor Prazo
    ///

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

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Senha.
///
/// <b> Regras de formato: </b>
///
/// - <b>XXXXXX</b>, em que cada <b>"X"</b> &eacute; d&iacute;gito num&eacute;rico(0 - 9) e n&atilde;o h&aacute; d&iacute;gito repetido.
///

class Senha{
public:

    ///
    /// Armazena valor de Senha caso seja v&aacute;lido.
    ///
    /// @param valor Senha
    ///
    /// @throw invalid_argument
    ///

    void SetSenha(string valor);

    ///
    /// Retorna valor de Senha.
    ///
    /// @return valor Senha
    ///

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

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Taxa.
///
/// <b> Regras de formato: </b>
///
/// - Valores, em % ao ano, na faixa de <b>0 a 200<b>.
///

class Taxa{
public:

    ///
    /// Armazena valor de Taxa caso seja v&aacute;lido.
    ///
    /// @param valor Taxa
    ///
    /// @throw invalid_argument
    ///

    void SetTaxa(double valor);

    ///
    /// Retorna valor de Taxa.
    ///
    /// @return valor Taxa.
    ///

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

//Classe Valor de Aplicacao

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Valor de Aplica&ccedil;&atilde;o.
///
/// <b> Regras de formato: </b>
///
/// - Valores, em reais, na faixa de <b>0 a 1.000.000,00<b>.
///

class ValorDeAplicacao{
public:

    ///
    /// Armazena valor de Valor de Aplica&ccedil;&atilde;o caso seja v&aacute;lido.
    ///
    /// @param valor Valor de Aplica&ccedil;&atilde;o
    ///
    /// @throw invalid_argument
    ///

    void SetValorDeAplicacao(double valor);

    ///
    /// Retorna valor de Valor de Aplica&ccedil;&atilde;o.
    ///
    /// @return valor Valor de Aplica&ccedil;&atilde;o
    ///

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

//Classe Valor Minimo

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Valor M&iacute;nimo.
///
/// <b> Regras de formato: </b>
///
/// - Os seguintes valores, em reais, s&atilde;o considerados v&aacute;lidos: <b>1000</b>, <b>5000</b>, <b>10000</b> e <b>50000</b>.
///


class ValorMinimo{
public:

    ///
    /// Armazena valor de Valor m&iacute;nimo caso seja v&aacute;lido.
    ///
    /// @param valor Valor M&iacute;nimo
    ///
    /// @throw invalid_argument
    ///

    void SetValorMinimo(double valor);

    ///
    /// Retorna valor de Valor m&iacute;nimo.
    ///
    /// @return valor Valor m&iacute;nimo
    ///

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
