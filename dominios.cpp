#include "dominios.h"

//Funcoes da Classe: Cep
void Cep::ValidarCep(int valor){
    switch(valor){
    case kIntervalosPermitidosSaoPaulo[0][0] ... kIntervalosPermitidosSaoPaulo[0][1]:
    case kIntervalosPermitidosSaoPaulo[1][0] ... kIntervalosPermitidosSaoPaulo[1][1]:
    case kIntervaloPermitidoBrasilia[0] ... kIntervaloPermitidoBrasilia[1]:
    case kIntervaloPermitidoFortaleza[0] ... kIntervaloPermitidoFortaleza[1]:
    case kIntervaloPermitidoRioDeJaneiro[0] ... kIntervaloPermitidoRioDeJaneiro[1]:
        return;
    default:
        throw invalid_argument("Argumento Cep Invalido");
    }
}

void Cep::SetCep(int valor){
    ValidarCep(valor);
    this->valor = valor;
}

//Funcoes da Classe: Classe

void Classe::ValidarClasse(string valor){
    if(valor != kValoresPermitidos[0] and valor != kValoresPermitidos[1] and
       valor != kValoresPermitidos[2] and valor != kValoresPermitidos[3]){
        throw invalid_argument("Argumento Classe Invalido");
    }
}

void Classe::SetClasse(string valor){
    ValidarClasse(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Agencia

void CodigoDeAgencia::ValidarCodigoDeAgencia(string valor){
    if( valor.length() == kTamanhoDoValor and valor != ValorNaoPermitido){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i])){
                throw invalid_argument("Argumento Codigo de Agencia Invalido");
            }
        }
    }else{
        throw invalid_argument("Argumento Codigo de Agencia Invalido");
    }
}

void CodigoDeAgencia::SetCodigoDeAgencia(string valor){
    ValidarCodigoDeAgencia(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Aplicacao

void CodigoDeAplicacao::ValidarCodigoDeAplicacao(string valor){
    if( valor.length() == kTamanhoDoValor and valor != ValorNaoPermitido){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i])){
                throw invalid_argument("Argumento Codigo de Aplicacao Invalido");
            }
        }
    }else{
        throw invalid_argument("Argumento Codigo de Aplicacao Invalido");
    }
}

void CodigoDeAplicacao::SetCodigoDeAplicacao(string valor){
    ValidarCodigoDeAplicacao(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Banco

void CodigoDeBanco::ValidarCodigoDeBanco(int valor){
    switch(valor){
    case kValoresPermitidos[0]:
    case kValoresPermitidos[1]:
    case kValoresPermitidos[2]:
    case kValoresPermitidos[3]:
    case kValoresPermitidos[4]:
        return;
    default:
        throw invalid_argument("Argumento Codigo de Banco Invalido");
    }
}

void CodigoDeBanco::SetCodigoDeBanco(int valor){
    ValidarCodigoDeBanco(valor);
    this->valor = valor;
}

//Funcoes da Classe: Codigo de Produto

void CodigoDeProduto::ValidarCodigoDeProduto(string valor){
    if( valor.length() == kTamanhoDoValor and valor != kValorNaoPermitido){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i])){
                throw invalid_argument("Argumento Codigo de Produto Invalido");
            }
        }
    }else{
        throw invalid_argument("Argumento Codigo de Produto Invalido");
    }
}

void CodigoDeProduto::SetCodigoDeProduto(string valor){
    ValidarCodigoDeProduto(valor);
    this->valor = valor;
}

//Funcoes da Classe: Cpf

void Cpf::ValidarCpf(string valor){
    if( valor.length() == this->kTamanhoDoValor){
        for(int i=0; i < this->kTamanhoDoValor; i++){
            if(i == this->kPosicaoPonto1 or i == this->kPosicaoPonto2){
                if(valor[i] != '.')
                throw invalid_argument("Argumento CPF Invalido");
            }
            else if(i == kPosicaoHifen){
                if(valor[i] != '-')
                throw invalid_argument("Argumento CPF Invalido");
            }
            else if(!isdigit(valor[i]))
                throw invalid_argument("Argumento CPF Invalido");
        }

        //verificando ultimos 2 digitos
        int soma;
        int multiplicador;
        int multiplicacao;
        for(int j=2; j > 0; j--){
            soma = 0;
            multiplicador = j - 1;
            for(int i=0; i < kTamanhoDoValor - j; i++){
                if( valor[i] != '.' and valor[i] != '-'){
                    multiplicacao = (valor[i] - (int)'0') * multiplicador;
                    soma += multiplicacao;
                    multiplicador++;
                }
            }
            if(soma%kModulo == 10)
                soma = 0;
            if( soma%kModulo != (valor[kTamanhoDoValor - j] - (int)'0'))
                throw invalid_argument("Argumento CPF Invalido");
        }
    }
    else
        throw invalid_argument("Argumento CPF Invalido");
}

void Cpf::SetCpf(string valor){
    ValidarCpf(valor);
    this->valor = valor;
}


