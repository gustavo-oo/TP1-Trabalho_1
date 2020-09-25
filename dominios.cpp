#include "dominios.h"
#include <iostream>

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
    if( valor.length() == kTamanhoDoValor){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(i == kPosicaoPonto1 or i == kPosicaoPonto2){
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

//Funcoes da Classe: Data

void Data::ValidarData(string valor){
    int dia = ((int)valor[0] - (int)'0')*10 + (int)valor[1] - (int)'0';
    int mes = ((int)valor[3] - (int)'0')*10 + (int)valor[4] - (int)'0';
    int ano = ((int)valor[6] - (int)'0')*1000 + ((int)valor[7] - (int)'0')*100 + ((int)valor[8] - (int)'0')*10 + (int)valor[9] - (int)'0';//6,7,8,9
    const int fevereiro = 2;
    //Verificar Formato
    if(valor.length()== kTamanhoDoValor or valor[kPosicaoBarra1] == '/' or valor[kPosicaoBarra2] == '/' ){
        //Verificar dados
        if(dia >= 1 and dia <= 31 and mes >= 1 and mes <= 12 and ano >= kIntervaloAnosPermitidos[0] and ano <= kIntervaloAnosPermitidos[1]){
            switch(mes){

            //Meses com 30 dias
                case kMes30Dias[0]:
                case kMes30Dias[1]:
                case kMes30Dias[2]:
                case kMes30Dias[3]:
                    if (dia > 30){
                        throw invalid_argument("Argumento Data Invalido");
                    }
                    return;

            //Mes de Fevereiro (28 ou 29 dias)
                case fevereiro:
                    if(((ano % 4 == 0) and (ano % 100 != 0)) or (ano % 400 == 0)){
                        if(dia > 29){
                            throw invalid_argument("Argumento Data Invalido");
                        }
                    }else{
                        if (dia > 28){
                            throw invalid_argument("Argumento Data Invalido");
                        }
                    }
                    return;

            //Meses com 31 dias
            default:
                return;
            }
        }
    }
    throw invalid_argument("Argumento Data Invalido");
}

//Funcoes da Classe: Emissor

void Data::SetData(string valor){
    ValidarData(valor);
    this->valor = valor;
}

void Emissor::ValidarEmissor(string valor){
    //1º verificar quantidade de caracteres
    if(valor.length() >= kIntervaloDeCaracteres[0] and valor.length() <= kIntervaloDeCaracteres[1]){
    //Teste feito sempre analisando o caractere anterior:
    //So numeros e letras podem estar em sequencia, sendo aceitos letras maisculas e minusculas, numeros, ponto, hifen e espaco
        for(int i = 0; i < valor.length(); i++){
            if(!isdigit(valor[i]) and !isalpha(valor[i]) and valor[i] != kPonto and valor[i] != kEspaco and valor[i] != kHifen){
                throw invalid_argument("Argumento Emissor Invalido");
            }
            //Como não tem caractere anterior ao 1º, a verificação é um pouco diferente
            if(i == 0){
                if(isalpha(valor[i])){
                   if(!isupper(valor[i])){
                        throw invalid_argument("Argumento Emissor Invalido");
                    }
                }
            }else{
                //Verificação de carecteres após o 1º
                //Se o caractere atual é uma letra e o anterior um espaço, a letra deve ser maiuscula
                if(isalpha(valor[i])){
                    if(valor[i-1] == kEspaco){
                        if(!isupper(valor[i])){
                            throw invalid_argument("Argumento Emissor Invalido");
                        }
                    }else{  //Se o caractere anterior não é um espaço, ele só pode ser um número ou uma letra
                        if(!isdigit(valor[i-1]) and !isalpha(valor[i-1])){
                            throw invalid_argument("Argumento Emissor Invalido");
                        }
                    }
                }else{  //Se o caractere atual é um número, o anterior só pode ser um número, uma letra ou um espaço
                    if(isdigit(valor[i])){
                        if(!isdigit(valor[i-1]) and !isalpha(valor[i-1]) and valor[i-1] != kEspaco){
                            throw invalid_argument("Argumento Emissor Invalido");
                        }
                    }else{  //Se o caractere atual é um ponto ou hifen, o anterior só pode ser um espaço
                        if(valor[i] == kPonto or valor[i] == kHifen){
                            if(valor[i-1] != kEspaco){
                                throw invalid_argument("Argumento Emissor Invalido");
                            }
                        }else{  //Se o caractere atual é um espaço, o anterior não pode ser um espaço
                            if(valor[i] == kEspaco and valor[i-1] == kEspaco){
                                throw invalid_argument("Argumento Emissor Invalido");
                            }
                        }
                    }

                }

            }

        }
    }else{
        throw invalid_argument("Argumento Emissor Invalido");
    }
}

void Emissor::SetEmissor(string valor){
    ValidarEmissor(valor);
    this->valor = valor;
}

//Funcoes da Classe: Endereco

void Endereco::ValidarEndereco(string valor){
    //1º verificar quantidade de caracteres
    if(valor.length() >= kIntervaloDeCaracteres[0] and valor.length() <= kIntervaloDeCaracteres[1]){
    //Teste feito sempre analisando o caractere anterior:
    //So numeros e letras podem estar em sequencia, sendo aceitos letras maisculas e minusculas, numeros, ponto e espaco
        for(int i = 0; i < valor.length(); i++){
            if(!isdigit(valor[i]) and !isalpha(valor[i]) and valor[i] != kPonto and valor[i] != kEspaco){
                throw invalid_argument("Argumento Emissor Invalido");
            }
            //Como não tem caractere anterior ao 1º, a verificação é um pouco diferente
            if(i == 0){
                if(isalpha(valor[i])){
                   if(!isupper(valor[i])){
                        throw invalid_argument("Argumento Emissor Invalido");
                    }
                }
            }else{
                //Verificação de carecteres após o 1º
                //Se o caractere atual é uma letra e o anterior um espaço, a letra deve ser maiuscula
                if(isalpha(valor[i])){
                    if(valor[i-1] == kEspaco){
                        if(!isupper(valor[i])){
                            throw invalid_argument("Argumento Emissor Invalido");
                        }
                    }else{  //Se o caractere anterior não é um espaço, ele só pode ser um número ou uma letra
                        if(!isdigit(valor[i-1]) and !isalpha(valor[i-1])){
                            throw invalid_argument("Argumento Emissor Invalido");
                        }
                    }
                }else{  //Se o caractere atual é um número, o anterior só pode ser um número, uma letra ou um espaço
                    if(isdigit(valor[i])){
                        if(!isdigit(valor[i-1]) and !isalpha(valor[i-1]) and valor[i-1] != kEspaco){
                            throw invalid_argument("Argumento Emissor Invalido");
                        }
                    }else{  //Se o caractere atual é um ponto, o anterior só pode ser um espaço
                        if(valor[i] == kPonto){
                            if(valor[i-1] != kEspaco){
                                throw invalid_argument("Argumento Emissor Invalido");
                            }
                        }else{  //Se o caractere atual é um espaço, o anterior não pode ser um espaço
                            if(valor[i] == kEspaco and valor[i-1] == kEspaco){
                                throw invalid_argument("Argumento Emissor Invalido");
                            }
                        }
                    }

                }

            }

        }
    }else{
        throw invalid_argument("Argumento Emissor Invalido");
    }
}

void Endereco::SetEndereco(string valor){
    ValidarEndereco(valor);
    this->valor = valor;
}

//Funcoes da Classe: Nome

void Nome::ValidarNome(string valor){
    if(valor.length() >= kIntervaloDeCaracteres[0] and valor.length() <= kIntervaloDeCaracteres[1]){
        for(int i = 0; i < valor.length(); i++){
            if(!isalpha(valor[i]) and valor[i] != kEspaco){
                throw invalid_argument("Argumento Emissor Invalido");
            }
            if(i == 0){
                if(isalpha(valor[i])){
                   if(!isupper(valor[i])){
                        throw invalid_argument("Argumento Emissor Invalido");
                    }
                }

            }else{
                if(isalpha(valor[i])){
                    if(valor[i-1] == kEspaco and !isupper(valor[i])){
                        throw invalid_argument("Argumento Emissor Invalido");
                    }
                }else{
                    if(valor[i] == kEspaco and valor[i-1] == kEspaco){
                        throw invalid_argument("Argumento Emissor Invalido");
                    }
                }
            }
        }
    }else{
        throw invalid_argument("Argumento Emissor Invalido");
    }
}

void Nome::SetNome(string valor){
    ValidarNome(valor);
    this->valor = valor;
}
