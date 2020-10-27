#include "testes_entidades.h"
#include "dominios.h"
#include <iostream>

//Funcoes de Teste: Aplicação

void TUAplicacao::Create(){
    aplicacao = new Aplicacao();

    codigo_valido.SetCodigoDeAplicacao(kCodigoValido);
    valor_valido.SetValorDeAplicacao(kValorValido);
    data_valida.SetData(kDataValida);

    estado = true;
}

void TUAplicacao::Destroy(){
    delete aplicacao;
}

void TUAplicacao::CodigoTest(){
    aplicacao->SetCodigo(codigo_valido);
    if(aplicacao->GetCodigo().GetCodigoDeAplicacao() != codigo_valido.GetCodigoDeAplicacao()){
       estado = false;
    }
}

void TUAplicacao::ValorTest(){
    aplicacao->SetValor(valor_valido);
    if(aplicacao->GetValor().GetValorDeAplicacao() != valor_valido.GetValorDeAplicacao()){
        estado = false;
    }
}

void TUAplicacao::DataTest(){
    aplicacao->SetData(data_valida);
    if(aplicacao->GetData().GetData() != data_valida.GetData()){
        estado = false;
    }
}

bool TUAplicacao::Run(){
    Create();
    CodigoTest();
    ValorTest();
    DataTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Conta

void TUConta::Create(){
    conta = new Conta();

    banco_valido.SetCodigoDeBanco(kBancoValido);
    agencia_valida.SetCodigoDeAgencia(kAgenciaValida);
    numero_valido.SetNumero(kNumeroValido);

    estado = true;
}

void TUConta::Destroy(){
    delete conta;
}

void TUConta::BancoTest(){
    conta->SetBanco(banco_valido);
    if(conta->GetBanco().GetCodigoDeBanco() != banco_valido.GetCodigoDeBanco()){
       estado = false;
    }
}

void TUConta::AgenciaTest(){
    conta->SetAgencia(agencia_valida);
    if(conta->GetAgencia().GetCodigoDeAgencia() != agencia_valida.GetCodigoDeAgencia()){
        estado = false;
    }
}

void TUConta::NumeroTest(){
    conta->SetNumero(numero_valido);
    if(conta->GetNumero().GetNumero() != numero_valido.GetNumero()){
        estado = false;
    }
}

bool TUConta::Run(){
    Create();
    BancoTest();
    AgenciaTest();
    NumeroTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Produto

void TUProduto::Create(){
    produto = new Produto();

    codigo_valido.SetCodigoDeProduto(kCodigoValido);
    classe_valida.SetClasse(kClasseValida);
    emissor_valido.SetEmissor(kEmissorValido);
    prazo_valido.SetPrazo(kPrazoValido);
    vencimento_valido.SetData(kVencimentoValido);
    taxa_valida.SetTaxa(kTaxaValida);
    horario_valido.SetHorario(kHorarioValido);
    valor_valido.SetValorMinimo(kValorValido);

    estado = true;
}

void TUProduto::Destroy(){
    delete produto;
}

void TUProduto::CodigoTest(){
    produto->SetCodigo(codigo_valido);
    if(produto->GetCodigo().GetCodigoDeProduto() != codigo_valido.GetCodigoDeProduto()){
        estado = false;
    }
}

void TUProduto::ClasseTest(){
    produto->SetClasse(classe_valida);
    if(produto->GetClasse().GetClasse() != classe_valida.GetClasse()){
        estado = false;
    }
}

void TUProduto::EmissorTest(){
    produto->SetEmissor(emissor_valido);
    if(produto->GetEmissor().GetEmissor() != emissor_valido.GetEmissor()){
        estado = false;
    }
}

void TUProduto::PrazoTest(){
    produto->SetPrazo(prazo_valido);
    if(produto->GetPrazo().GetPrazo() != prazo_valido.GetPrazo()){
        estado = false;
    }
}

void TUProduto::VencimentoTest(){
    produto->SetVencimento(vencimento_valido);
    if(produto->GetVencimento().GetData() != vencimento_valido.GetData()){
        estado = false;
    }
}

void TUProduto::TaxaTest(){
    produto->SetTaxa(taxa_valida);
    if(produto->GetTaxa().GetTaxa() != taxa_valida.GetTaxa()){
        estado = false;
    }
}

void TUProduto::HorarioTest(){
    produto->SetHorario(horario_valido);
    if(produto->GetHorario().GetHorario() != horario_valido.GetHorario()){
        estado = false;
    }
}

void TUProduto::ValorTest(){
    produto->SetValor(valor_valido);
    if(produto->GetValor().GetValorMinimo() != valor_valido.GetValorMinimo()){
        estado = false;
    }
}

bool TUProduto::Run(){
    Create();
    CodigoTest();
    ClasseTest();
    EmissorTest();
    PrazoTest();
    VencimentoTest();
    TaxaTest();
    HorarioTest();
    ValorTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Usuario

void TUUsuario::Create(){
    usuario = new Usuario();

    nome_valido.SetNome(kNomeValido);
    endereco_valido.SetEndereco(kEnderecoValido);
    cep_valido.SetCep(kCepValido);
    cpf_valido.SetCpf(kCpfValido);
    senha_valida.SetSenha(kSenhaValida);

    estado = true;
}

void TUUsuario::Destroy(){
    delete usuario;
}

void TUUsuario::NomeTest(){
    usuario->SetNome(nome_valido);
    if(usuario->GetNome().GetNome() != nome_valido.GetNome()){
        estado = false;
    }
}

void TUUsuario::EnderecoTest(){
    usuario->SetEndereco(endereco_valido);
    if(usuario->GetEndereco().GetEndereco() != endereco_valido.GetEndereco()){
        estado = false;
    }
}

void TUUsuario::CepTest(){
    usuario->SetCep(cep_valido);
    if(usuario->GetCep().GetCep() != cep_valido.GetCep()){
        estado = false;
    }
}

void TUUsuario::CpfTest(){
    usuario->SetCpf(cpf_valido);
    if(usuario->GetCpf().GetCpf() != cpf_valido.GetCpf()){
        estado = false;
    }
}

void TUUsuario::SenhaTest(){
    usuario->SetSenha(senha_valida);
    if(usuario->GetSenha().GetSenha() != senha_valida.GetSenha()){
        estado = false;
    }
}

bool TUUsuario::Run(){
    Create();
    NomeTest();
    EnderecoTest();
    CepTest();
    CpfTest();
    SenhaTest();
    Destroy();
    return estado;
}
