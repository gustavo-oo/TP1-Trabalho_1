#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

class Aplicacao{
public:

    void SetCodigo(CodigoDeAplicacao &codigo);
    CodigoDeAplicacao GetCodigo();

    void SetValor(ValorDeAplicacao &valor);
    ValorDeAplicacao GetValor();

    void SetData(Data &data);
    Data GetData();

private:

    CodigoDeAplicacao codigo;
    ValorDeAplicacao valor;
    Data data;

};

class Conta{
public:

    void SetBanco(CodigoDeBanco &banco);
    CodigoDeBanco GetBanco();

    void SetAgencia(CodigoDeAgencia &agencia);
    CodigoDeAgencia GetAgencia();

    void SetNumero(Numero &numero);
    Numero GetNumero();

private:

    CodigoDeBanco banco;
    CodigoDeAgencia agencia;
    Numero numero;

};

class Produto{
public:

    void SetCodigo(CodigoDeProduto &codigo);
    CodigoDeProduto GetCodigo();

    void SetClasse(Classe &classe);
    Classe GetClasse();

    void SetEmissor(Emissor &emissor);
    Emissor GetEmissor();

    void SetPrazo(Prazo &prazo);
    Prazo GetPrazo();

    void SetVencimento(Data &vencimento);
    Data GetVencimento();

    void SetTaxa(Taxa &taxa);
    Taxa GetTaxa();

    void SetHorario(Horario &horario);
    Horario GetHorario();

    void SetValor(ValorMinimo &valor);
    ValorMinimo GetValor();

private:

    CodigoDeProduto codigo;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Data vencimento;
    Taxa taxa;
    Horario horario;
    ValorMinimo valor;

};

class Usuario{
public:

    void SetNome(Nome &nome);
    Nome GetNome();

    void SetEndereco(Endereco &endereco);
    Endereco GetEndereco();

    void SetCep(Cep &cep);
    Cep GetCep();

    void SetCpf(Cpf &cpf);
    Cpf GetCpf();

    void SetSenha(Senha &senha);
    Senha GetSenha();

private:

    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;

};

#endif // ENTIDADES_H_INCLUDED
