#include "entidades.h"

//Funcoes da Entidade: Aplicacao

void Aplicacao::SetCodigo(CodigoDeAplicacao &codigo){
    this->codigo = codigo;
}

CodigoDeAplicacao Aplicacao::GetCodigo(){
    return codigo;
}

void Aplicacao::SetValor(ValorDeAplicacao &valor){
    this->valor = valor;
}

ValorDeAplicacao Aplicacao::GetValor(){
    return valor;
}

void Aplicacao::SetData(Data &data){
    this->data = data;
}

Data Aplicacao::GetData(){
    return data;
}

//Funcoes da Entidade: Conta

void Conta::SetBanco(CodigoDeBanco &banco){
    this->banco = banco;
}

CodigoDeBanco Conta::GetBanco(){
    return banco;
}

void Conta::SetAgencia(CodigoDeAgencia &agencia){
    this->agencia = agencia;
}

CodigoDeAgencia Conta::GetAgencia(){
    return agencia;
}

void Conta::SetNumero(Numero &numero){
    this->numero = numero;
}

Numero Conta::GetNumero(){
    return numero;
}
