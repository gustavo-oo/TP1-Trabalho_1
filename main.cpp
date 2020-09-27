#include <iostream>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main(){
    TUCep teste_cep;
    TUClasse teste_classe;
    TUCodigoDeAgencia teste_codigo_de_agencia;
    TUCodigoDeAplicacao teste_codigo_de_aplicacao;
    TUCodigoDeBanco teste_codigo_de_banco;
    TUCodigoDeProduto teste_codigo_de_produto;
    TUCpf teste_cpf;
    TUData teste_data;
    TUEmissor teste_emissor;
    TUEndereco teste_endereco;
    TUHorario teste_horario;
    TUNome teste_nome;
    TUNumero teste_numero;
    TUPrazo teste_prazo;
    TUSenha teste_senha;
    TUTaxa teste_taxa;

    //Confirmacao Teste: Cep
    cout << "Teste da Classe Cep: ";
    if(teste_cep.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Classe
    cout << "Teste da Classe Classe: ";
    if(teste_classe.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Codigo de Agencia
    cout << "Teste da Classe Codigo de Agencia: ";
    if(teste_codigo_de_agencia.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Codigo de Aplicacao
    cout << "Teste da Classe Codigo de Aplicacao: ";
    if(teste_codigo_de_aplicacao.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Codigo de Banco
    cout << "Teste da Classe Codigo de Banco: ";
    if(teste_codigo_de_banco.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Codigo de Produto
    cout << "Teste da Classe Codigo de Produto: ";
    if(teste_codigo_de_produto.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: CPF
    cout << "Teste da Classe CPF: ";
    if(teste_cpf.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Data
    cout << "Teste da Classe Data: ";
    if(teste_data.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Emissor
    cout << "Teste da Classe Emissor: ";
    if(teste_emissor.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Endereco
    cout << "Teste da Classe Endereco: ";
    if(teste_endereco.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Horario
    cout << "Teste da Classe Horario: ";
    if(teste_horario.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Nome
    cout << "Teste da Classe Nome: ";
    if(teste_nome.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Numero
    cout << "Teste da Classe Numero: ";
    if(teste_numero.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Prazo
    cout << "Teste da Classe Prazo: ";
    if(teste_prazo.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }


    //Confirmacao Teste: Senha
    cout << "Teste da Classe Senha: ";
    if(teste_senha.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }

    //Confirmacao Teste: Taxa
    cout << "Teste da Classe Taxa: ";
    if(teste_taxa.Run()){
        cout << "SUCESSO\n";
    }
    else{
        cout << "FALHA\n";
    }


    return 0;
}
