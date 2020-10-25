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
