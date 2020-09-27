#include "dominios.h"
#include <iostream>
#include <string> //stoi

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

//Funcoes da Classe: Horário

void Horario::ValidarHorario(string valor){
    if(valor.length() == kTamanhoDoValor){
        string hora, minuto;
        for(int i=0; i < kTamanhoDoValor; i++){
            if(i != kPosicao2Pontos){
                if(isdigit(valor[i])){
                    if(i < kPosicao2Pontos)
                        hora.push_back(valor[i]);
                    else
                        minuto.push_back(valor[i]);
                }
                else
                    throw invalid_argument("Argumento Horario Invalido");
            }
            else if(valor[i] != ':')
                throw invalid_argument("Argumento Horario Invalido");
        }
        int iHora = stoi(hora);
        int iMinuto = stoi(minuto);

        if(iHora < kHoraMin or iHora > kHoraMax)
            throw invalid_argument("Argumento Horario Invalido");
        if(iMinuto < 0 or iMinuto > 59)
            throw invalid_argument("Argumento Horario Invalido");
        if(iHora == kHoraMax and iMinuto != 0)
            throw invalid_argument("Argumento Horario Invalido");
    }
    else
        throw invalid_argument("Argumento Horario Invalido");
}

void Horario::SetHorario(string valor){
    ValidarHorario(valor);
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

//Funcoes da Classe: Número

void Numero::ValidarNumero(string valor){
    if(valor.length() == kTamanhoDoValor){
        int digitos[7], posicao = 0;
        for(int i=0; i < kTamanhoDoValor; i++){
            if(i == kPosicaoHifen){
                if(valor[i] != '-')
                    throw invalid_argument("Argumento Numero Invalido");
            }
            else if(!isdigit(valor[i]))
                throw invalid_argument("Argumento Numero Invalido");
            else
                digitos[posicao++] = (int)valor[i] - (int)'0';
        }
        int multiplicador = 2, soma = 0;    // Multiplicador começa em 2 e vai
        for(int i = 5; i >= 0; i--){        // incrementando do último dígito
            digitos[i] *= multiplicador;    // (antes do dv)até o primeiro
            soma += digitos[i];             // A soma dos produtos dos dígitos
            multiplicador++;                // pelo multiplicador é então dividida
        }                                   // por 11(kModulo) e o resto da divisão
        int dv = (soma*10)%kModulo;         // é o digito verificador.
        if(dv == 10 and valor[kTamanhoDoValor - 1] != '0' and valor[kTamanhoDoValor - 1] != 'X') //  No caso do dv ser 10, ele será
            throw invalid_argument("Argumento Numero Invalido");                                 //  substituido por X ou 0.
        else if(dv != digitos[6])
            throw invalid_argument("Argumento Numero Invalido");                                 // Comparando o dv correto com o passado.
    }
    else
        throw invalid_argument("Argumento Numero Invalido");
}
void Numero::SetNumero(string valor){
    ValidarNumero(valor);
    this->valor = valor;
}

//Funcoes da Classe: Prazo

void Prazo::ValidarPrazo(int valor){
    for(int i=0; i < 12; i++){              //12 valores permitidos
        if(kValoresPermitidos[i] == valor)
            return;
    }
    throw invalid_argument("Argumento Prazo Invalido");
}

void Prazo::SetPrazo(int valor){
    ValidarPrazo(valor);
    this->valor = valor;
}

//Funcoes da Classe: Senha

void Senha::ValidarSenha(string valor){
    if(valor.length() == kTamanhoDoValor){
        for(int i=0; i < kTamanhoDoValor; i++){
            if(!isdigit(valor[i]))
                throw invalid_argument("Argumento Senha Invalido");
            for(int j=0; j < kTamanhoDoValor; j++){     // Comparando cada digito da
                if(i != j and valor[i] == valor[j])     // senha com todos os demais
                    throw invalid_argument("Argumento Senha Invalido");
            }
        }
    }
    else
        throw invalid_argument("Argumento Senha Invalido");
}

void Senha::SetSenha(string valor){
    ValidarSenha(valor);
    this->valor = valor;
}

//Funcoes da Classe: Taxa

void Taxa::ValidarTaxa(double valor){
    if(valor < kValorMin or valor > kValorMax)
        throw invalid_argument("Argumento Taxa Invalido");
}

void Taxa::SetTaxa(double valor){
    ValidarTaxa(valor);
    this->valor =  valor;
}

//Funcoes da Classe: Valor de Aplicação

void ValorDeAplicacao::ValidarValorDeAplicacao(double valor){
    if(valor < kValorMin or valor > kValorMax)
        throw invalid_argument("Argumento Taxa Invalido");
}

void ValorDeAplicacao::SetValorDeAplicacao(double valor){
    ValidarValorDeAplicacao(valor);
    this->valor =  valor;
}

//Funcoes da Classe: Valor Mínimo

void ValorMinimo::ValidarValorMinimo(double valor){
    for(int i=0; i < 4; i++){              //4 valores permitidos
        if(kValoresPermitidos[i] == valor)
            return;
    }
    throw invalid_argument("Argumento Prazo Invalido");
}

void ValorMinimo::SetValorMinimo(double valor){
    ValidarValorMinimo(valor);
    this->valor = valor;
}
