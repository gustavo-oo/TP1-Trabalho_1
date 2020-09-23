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
    constexpr static int kIntervalosPossiveisSaoPaulo[2][2] ={{1000000, 5999999} , {8000000, 8499999}};
    constexpr static int kIntervaloPossivelRioDeJaneiro[2] = {20000000, 26600999};
    constexpr static int kIntervaloPossivelBrasilia[2] = {70000000, 70999999};
    constexpr static int kIntervaloPossivelSalvador[2] = {40000000, 41999999};
    constexpr static int kIntervaloPossivelFortaleza[2] = {60000000, 60999999};

    void ValidarCep(int valor);
};

inline int Cep::GetCep(){
    return valor;
}

//Classe Classe

class Classe{
private:
    string valor;
    inline const static string kValoresPossiveis[5] = {"CDB", "LCA", "LCI", "LF", "LC"};

    void ValidarClasse(string valor);

public:
    void SetClasse(string valor);
    string GetClasse();
};

inline string Classe::GetClasse(){
    return valor;
}

//Classe Codigo de Agencia

class CodigoDeAgencia{
private:
    string valor;
    const static int kTamanhoDoValor = 4;
    inline const static string ValorNaoPermitido = "0000";

    void ValidarCodigoDeAgencia(string valor);

public:
    void SetCodigoDeAgencia(string valor);
    string GetCodigoDeAgencia();
};

inline string CodigoDeAgencia::GetCodigoDeAgencia(){
    return valor;
}

//Classe Codigo de Aplicação

class CodigoDeAplicacao{
private:
    string valor;
    const static int kTamanhoDoValor = 5;
    inline const static string ValorNaoPermitido = "00000";

    void ValidarCodigoDeAplicacao(string valor);

public:
    void SetCodigoDeAplicacao(string valor);
    string GetCodigoDeAplicacao();
};

inline string CodigoDeAplicacao::GetCodigoDeAplicacao(){
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
