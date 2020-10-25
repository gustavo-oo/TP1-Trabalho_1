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
