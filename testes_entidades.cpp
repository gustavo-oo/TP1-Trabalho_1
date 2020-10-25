#include "testes_entidades.h"
#include "dominios.h"
#include <iostream>

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
