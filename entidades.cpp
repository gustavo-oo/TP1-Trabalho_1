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

//Funcoes da Entidade: Produto

void Produto::SetCodigo(CodigoDeProduto &codigo){
    this->codigo = codigo;
}

CodigoDeProduto Produto::GetCodigo(){
    return codigo;
}

void Produto::SetClasse(Classe &classe){
    this->classe = classe;
}

Classe Produto::GetClasse(){
    return classe;
}

void Produto::SetEmissor(Emissor &emissor){
    this->emissor = emissor;
}

Emissor Produto::GetEmissor(){
    return emissor;
}

void Produto::SetPrazo(Prazo &prazo){
    this->prazo = prazo;
}

Prazo Produto::GetPrazo(){
    return prazo;
}

void Produto::SetVencimento(Data &vencimento){
    this->vencimento = vencimento;
}

Data Produto::GetVencimento(){
    return vencimento;
}

void Produto::SetTaxa(Taxa &taxa){
    this->taxa = taxa;
}

Taxa Produto::GetTaxa(){
    return taxa;
}

void Produto::SetHorario(Horario &horario){
    this->horario = horario;
}

Horario Produto::GetHorario(){
    return horario;
}

void Produto::SetValor(ValorMinimo &valor){
    this->valor = valor;
}

ValorMinimo Produto::GetValor(){
    return valor;
}

//Funcoes da Entidade: Usuario

void Usuario::SetNome(Nome &nome){
    this->nome = nome;
}

Nome Usuario::GetNome(){
    return nome;
}

void Usuario::SetEndereco(Endereco &endereco){
    this->endereco = endereco;
}

Endereco Usuario::GetEndereco(){
    return endereco;
}

void Usuario::SetCep(Cep &cep){
    this->cep = cep;
}

Cep Usuario::GetCep(){
    return cep;
}

void Usuario::SetCpf(Cpf &cpf){
    this->cpf = cpf;
}

Cpf Usuario::GetCpf(){
    return cpf;
}

void Usuario::SetSenha(Senha &senha){
    this->senha = senha;
}

Senha Usuario::GetSenha(){
    return senha;
}
