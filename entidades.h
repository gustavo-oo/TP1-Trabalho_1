#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

///
/// @file entidades.h
///

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Aplica&ccedil;&atilde;o.
///

class Aplicacao{
public:

    ///
    /// Armazena inst&acirc;ncia da classe CodigoDeAplicacao.
    ///
    /// @param codigo &eacute; inst&acirc;ncia da classe.
    ///

    void SetCodigo(CodigoDeAplicacao &codigo);

    ///
    /// Retorna inst&acirc;ncia da classe CodigoDeAplicacao armazenada.
    ///
    /// @return codigo
    ///

    CodigoDeAplicacao GetCodigo();

    ///
    /// Armazena inst&acirc;ncia da classe ValorDeAplicacao.
    ///
    /// @param valor &eacute; inst&acirc;ncia da classe.
    ///

    void SetValor(ValorDeAplicacao &valor);

    ///
    /// Retorna inst&acirc;ncia da classe ValorDeAplicacao armazenada.
    ///
    /// @return valor
    ///

    ValorDeAplicacao GetValor();

    ///
    /// Armazena inst&acirc;ncia da classe Data.
    ///
    /// @param data &eacute; inst&acirc;ncia da classe.
    ///

    void SetData(Data &data);

    ///
    /// Retorna inst&acirc;ncia da classe Data armazenada.
    ///
    /// @return data
    ///

    Data GetData();

private:

    CodigoDeAplicacao codigo;
    ValorDeAplicacao valor;
    Data data;

};

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Conta.
///

class Conta{
public:

    ///
    /// Armazena inst&acirc;ncia da classe CodigoDeBanco.
    ///
    /// @param banco &eacute; inst&acirc;ncia da classe.
    ///


    void SetBanco(CodigoDeBanco &banco);

    ///
    /// Retorna inst&acirc;ncia da classe CodigoDeBanco armazenada.
    ///
    /// @return banco
    ///

    CodigoDeBanco GetBanco();

    ///
    /// Armazena inst&acirc;ncia da classe CodigoDeAgencia.
    ///
    /// @param agencia &eacute; inst&acirc;ncia da classe.
    ///

    void SetAgencia(CodigoDeAgencia &agencia);

    ///
    /// Retorna inst&acirc;ncia da classe CodigoDeAgencia armazenada.
    ///
    /// @return agencia
    ///

    CodigoDeAgencia GetAgencia();

    ///
    /// Armazena inst&acirc;ncia da classe Numero.
    ///
    /// @param numero &eacute; inst&acirc;ncia da classe.
    ///

    void SetNumero(Numero &numero);

    ///
    /// Retorna inst&acirc;ncia da classe Numero armazenada.
    ///
    /// @return numero
    ///

    Numero GetNumero();

private:

    CodigoDeBanco banco;
    CodigoDeAgencia agencia;
    Numero numero;

};

///
/// Padr&atilde;o para representa&ccedil;&atilde;o de Produto.
///

class Produto{
public:

    ///
    /// Armazena inst&acirc;ncia da classe CodigoDeProduto.
    ///
    /// @param codigo &eacute; inst&acirc;ncia da classe.
    ///

    void SetCodigo(CodigoDeProduto &codigo);

    ///
    /// Retorna inst&acirc;ncia da classe CodigoDeProduto armazenada.
    ///
    /// @return codigo
    ///

    CodigoDeProduto GetCodigo();

    ///
    /// Armazena inst&acirc;ncia da classe Classe.
    ///
    /// @param classe &eacute; inst&acirc;ncia da classe.
    ///

    void SetClasse(Classe &classe);

    ///
    /// Retorna inst&acirc;ncia da classe Classe armazenada.
    ///
    /// @return classe
    ///

    Classe GetClasse();

    ///
    /// Armazena inst&acirc;ncia da classe Emissor.
    ///
    /// @param emissor &eacute; inst&acirc;ncia da classe.
    ///

    void SetEmissor(Emissor &emissor);

    ///
    /// Retorna inst&acirc;ncia da classe Emissor armazenada.
    ///
    /// @return emissor
    ///

    Emissor GetEmissor();

    ///
    /// Armazena inst&acirc;ncia da classe Prazo.
    ///
    /// @param prazo &eacute; inst&acirc;ncia da classe.
    ///

    void SetPrazo(Prazo &prazo);

    ///
    /// Retorna inst&acirc;ncia da classe Prazo armazenada.
    ///
    /// @return prazo
    ///

    Prazo GetPrazo();

    ///
    /// Armazena inst&acirc;ncia da classe Data.
    ///
    /// @param vencimento &eacute; inst&acirc;ncia da classe.
    ///

    void SetVencimento(Data &vencimento);

    ///
    /// Retorna inst&acirc;ncia da classe Data armazenada.
    ///
    /// @return vencimento
    ///

    Data GetVencimento();

    ///
    /// Armazena inst&acirc;ncia da classe Taxa.
    ///
    /// @param taxa &eacute; inst&acirc;ncia da classe.
    ///

    void SetTaxa(Taxa &taxa);

    ///
    /// Retorna inst&acirc;ncia da classe Taxa armazenada.
    ///
    /// @return taxa
    ///

    Taxa GetTaxa();

    ///
    /// Armazena inst&acirc;ncia da classe Horario.
    ///
    /// @param horario &eacute; inst&acirc;ncia da classe.
    ///

    void SetHorario(Horario &horario);

    ///
    /// Retorna inst&acirc;ncia da classe Horario armazenada.
    ///
    /// @return horario
    ///

    Horario GetHorario();

    ///
    /// Armazena inst&acirc;ncia da classe ValorMinimo.
    ///
    /// @param valor &eacute; inst&acirc;ncia da classe.
    ///

    void SetValor(ValorMinimo &valor);

    ///
    /// Retorna inst&acirc;ncia da classe ValorMinimo armazenada.
    ///
    /// @return valor
    ///

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

    ///
    /// Armazena inst&acirc;ncia da classe Nome.
    ///
    /// @param nome &eacute; inst&acirc;ncia da classe.
    ///

    void SetNome(Nome &nome);

    ///
    /// Retorna inst&acirc;ncia da classe Nome armazenada.
    ///
    /// @return nome
    ///

    Nome GetNome();

    ///
    /// Armazena inst&acirc;ncia da classe Endereco.
    ///
    /// @param endereco &eacute; inst&acirc;ncia da classe.
    ///

    void SetEndereco(Endereco &endereco);

    ///
    /// Retorna inst&acirc;ncia da classe Endereco armazenada.
    ///
    /// @return endereco
    ///

    Endereco GetEndereco();

    ///
    /// Armazena inst&acirc;ncia da classe Cep.
    ///
    /// @param cep &eacute; inst&acirc;ncia da classe.
    ///

    void SetCep(Cep &cep);

    ///
    /// Retorna inst&acirc;ncia da classe Cep armazenada.
    ///
    /// @return cep
    ///

    Cep GetCep();

    ///
    /// Armazena inst&acirc;ncia da classe Cpf.
    ///
    /// @param cpf &eacute; inst&acirc;ncia da classe.
    ///

    void SetCpf(Cpf &cpf);

    ///
    /// Retorna inst&acirc;ncia da classe Cpf armazenada.
    ///
    /// @return cpf
    ///

    Cpf GetCpf();

    ///
    /// Armazena inst&acirc;ncia da classe Senha.
    ///
    /// @param senha &eacute; inst&acirc;ncia da classe.
    ///

    void SetSenha(Senha &senha);

    ///
    /// Retorna inst&acirc;ncia da classe Senha armazenada.
    ///
    /// @return senha
    ///

    Senha GetSenha();

private:

    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;

};

#endif // ENTIDADES_H_INCLUDED
