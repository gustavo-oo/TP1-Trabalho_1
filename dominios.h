#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

//Classe CEP

class Cep{
private:
    int valor;

    const static int VALOR_MINIMO_SP_1 = 1000000;
    const static int VALOR_MAXIMO_SP_1 = 5999999;

    const static int VALOR_MINIMO_SP_2 = 8000000;
    const static int VALOR_MAXIMO_SP_2 = 8499999;

    const static int VALOR_MINIMO_RJ = 20000000;
    const static int VALOR_MAXIMO_RJ = 26600999;

    const static int VALOR_MINIMO_BR = 70000000;
    const static int VALOR_MAXIMO_BR = 70999999;

    const static int VALOR_MINIMO_SA = 41999999;
    const static int VALOR_MAXIMO_SA = 40000000;

    const static int VALOR_MINIMO_FO = 60000000;
    const static int VALOR_MAXIMO_FO = 60999999;

    void validarCep(int valor) throw(invalid_argument);

public:
    void setCep(int valor) throw(invalid_argument);
    int getCep();
};

inline int Cep::getCep(){
    return valor;
}

//Classe Classe

class Classe{
private:
    string valor;

    const string VALOR_CDB = "CDB";
    const string VALOR_LCA = "LCA";
    const string VALOR_LF = "LF";
    const string VALOR_LC = "LC";

    void validarClasse(string valor) throw(invalid_argument);

public:
    void setClasse(string valor) throw(invalid_argument);
    string getClasse();
};

inline string Classe::getClasse(){
    return valor;
}


#endif // DOMINIOS_H_INCLUDED
