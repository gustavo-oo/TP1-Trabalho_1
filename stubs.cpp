#include "stubs.h"

// Adequar os valores.

const string StubServicoAutenticacao::INVALIDO = "12345";
const string StubServicoPessoal::INVALIDO = "12345";
const string StubServicoProdutosFinanceiros::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementações dos métodos dos stubs.

bool StubServicoAutenticacao::autenticar(Cpf cpf, Senha senha){
    if(cpf.GetCpf().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoPessoal::cadastrarUsuario(Usuario usuario){
    if(usuario.GetCpf().GetCpf().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::cadastrarConta(Conta conta){
    if(conta.GetNumero().GetNumero().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::consultarConta(Conta *conta){
    if(conta->GetNumero().GetNumero().compare(INVALIDO) == 0)
        return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar código que atribui valores ao objeto identificado por conta.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    return true;
}

bool StubServicoProdutosFinanceiros::cadastrarProdutoInvestimento(Produto produto){
    if(produto.GetCodigo().GetCodigoDeProduto().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::descadastrarProdutoInvestimento(CodigoDeProduto codigo){
    if(codigo.GetCodigoDeProduto().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::realizarAplicacao(Aplicacao aplicacao){
    if(aplicacao.GetCodigo().GetCodigoDeAplicacao().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoProdutosFinanceiros::recuperarAplicacao(Aplicacao *aplicacao){
    if(aplicacao->GetCodigo().GetCodigoDeAplicacao().compare(INVALIDO) == 0)
        return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar código que atribui valores ao objeto identificado por aplicacao.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    return true;
}


