#include "testes.h"
#include "dominios.h"

//Funcoes de Teste: Cep
void TUCep::Create(){
    cep = new Cep();
    estado = true;
}

void TUCep::Destroy(){
    delete cep;
}

void TUCep::SucessTest(){
    try{
        cep->SetCep(kValorValido);
        if(cep->GetCep() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCep::FailureTest(){
    try{
        cep->SetCep(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCep::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Classe

void TUClasse::Create(){
    classe = new Classe();
    estado = true;
}

void TUClasse::Destroy(){
    delete classe;
}

void TUClasse::SucessTest(){
    try{
        classe->SetClasse(kValorValido);
        if(classe->GetClasse() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUClasse::FailureTest(){
    try{
        classe->SetClasse(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUClasse::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Codigo de Agencia

void TUCodigoDeAgencia::Create(){
    codigo_de_agencia = new CodigoDeAgencia();
    estado = true;
}

void TUCodigoDeAgencia::Destroy(){
    delete codigo_de_agencia;
}

void TUCodigoDeAgencia::SucessTest(){
    try{
        codigo_de_agencia->SetCodigoDeAgencia(kValorValido);
        if(codigo_de_agencia->GetCodigoDeAgencia() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeAgencia::FailureTest(){
    try{
        codigo_de_agencia->SetCodigoDeAgencia(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCodigoDeAgencia::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Codigo de Aplicacao

void TUCodigoDeAplicacao::Create(){
    codigo_de_aplicacao = new CodigoDeAplicacao();
    estado = true;
}

void TUCodigoDeAplicacao::Destroy(){
    delete codigo_de_aplicacao;
}

void TUCodigoDeAplicacao::SucessTest(){
    try{
        codigo_de_aplicacao->SetCodigoDeAplicacao(kValorValido);
        if(codigo_de_aplicacao->GetCodigoDeAplicacao() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeAplicacao::FailureTest(){
    try{
        codigo_de_aplicacao->SetCodigoDeAplicacao(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCodigoDeAplicacao::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Codigo de Banco

void TUCodigoDeBanco::Create(){
    codigo_de_banco = new CodigoDeBanco();
    estado = true;
}

void TUCodigoDeBanco::Destroy(){
    delete codigo_de_banco;
}

void TUCodigoDeBanco::SucessTest(){
    try{
        codigo_de_banco->SetCodigoDeBanco(kValorValido);
        if(codigo_de_banco->GetCodigoDeBanco() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeBanco::FailureTest(){
    try{
        codigo_de_banco->SetCodigoDeBanco(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCodigoDeBanco::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Codigo de Produto

void TUCodigoDeProduto::Create(){
    codigo_de_produto = new CodigoDeProduto();
    estado = true;
}

void TUCodigoDeProduto::Destroy(){
    delete codigo_de_produto;
}

void TUCodigoDeProduto::SucessTest(){
    try{
        codigo_de_produto->SetCodigoDeProduto(kValorValido);
        if(codigo_de_produto->GetCodigoDeProduto() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCodigoDeProduto::FailureTest(){
    try{
        codigo_de_produto->SetCodigoDeProduto(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCodigoDeProduto::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Cpf

void TUCpf::Create(){
    cpf = new Cpf();
    estado = true;
}

void TUCpf::Destroy(){
    delete cpf;
}

void TUCpf::SucessTest(){
    try{
        cpf->SetCpf(kValorValido);
        if(cpf->GetCpf() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUCpf::FailureTest(){
    try{
        cpf->SetCpf(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUCpf::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Data

void TUData::Create(){
    data = new Data();
    estado = true;
}

void TUData::Destroy(){
    delete data;
}

void TUData::SucessTest(){
    try{
        data->SetData(kValorValido);
        if(data->GetData() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUData::FailureTest(){
    try{
        data->SetData(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUData::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Emissor

void TUEmissor::Create(){
    emissor = new Emissor();
    estado = true;
}

void TUEmissor::Destroy(){
    delete emissor;
}

void TUEmissor::SucessTest(){
    try{
        emissor->SetEmissor(kValorValido);
        if(emissor->GetEmissor() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUEmissor::FailureTest(){
    try{
        emissor->SetEmissor(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUEmissor::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Endereco

void TUEndereco::Create(){
    endereco = new Endereco();
    estado = true;
}

void TUEndereco::Destroy(){
    delete endereco;
}

void TUEndereco::SucessTest(){
    try{
        endereco->SetEndereco(kValorValido);
        if(endereco->GetEndereco() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUEndereco::FailureTest(){
    try{
        endereco->SetEndereco(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUEndereco::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Horario

void TUHorario::Create(){
    horario = new Horario();
    estado = true;
}

void TUHorario::Destroy(){
    delete horario;
}

void TUHorario::SucessTest(){
    try{
        horario->SetHorario(kValorValido);
        if(horario->GetHorario() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUHorario::FailureTest(){
    try{
        horario->SetHorario(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUHorario::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Nome

void TUNome::Create(){
    nome = new Nome();
    estado = true;
}

void TUNome::Destroy(){
    delete nome;
}

void TUNome::SucessTest(){
    try{
        nome->SetNome(kValorValido);
        if(nome->GetNome() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUNome::FailureTest(){
    try{
        nome->SetNome(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUNome::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Numero

void TUNumero::Create(){
    numero = new Numero();
    estado = true;
}

void TUNumero::Destroy(){
    delete numero;
}

void TUNumero::SucessTest(){
    try{
        numero->SetNumero(kValorValido);
        if(numero->GetNumero() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUNumero::FailureTest(){
    try{
        numero->SetNumero(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUNumero::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Prazo

void TUPrazo::Create(){
    prazo = new Prazo();
    estado = true;
}

void TUPrazo::Destroy(){
    delete prazo;
}

void TUPrazo::SucessTest(){
    try{
        prazo->SetPrazo(kValorValido);
        if(prazo->GetPrazo() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUPrazo::FailureTest(){
    try{
        prazo->SetPrazo(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUPrazo::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Senha

void TUSenha::Create(){
    senha = new Senha();
    estado = true;
}

void TUSenha::Destroy(){
    delete senha;
}

void TUSenha::SucessTest(){
    try{
        senha->SetSenha(kValorValido);
        if(senha->GetSenha() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUSenha::FailureTest(){
    try{
        senha->SetSenha(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUSenha::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}

//Funcoes de Teste: Taxa

void TUTaxa::Create(){
    taxa = new Taxa();
    estado = true;
}

void TUTaxa::Destroy(){
    delete taxa;
}

void TUTaxa::SucessTest(){
    try{
        taxa->SetTaxa(kValorValido);
        if(taxa->GetTaxa() != kValorValido){
            estado = false;
        }
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

void TUTaxa::FailureTest(){
    try{
        taxa->SetTaxa(kValorInvalido);
        estado = false;
    }
    catch(invalid_argument &excecao){
        return;
    }
}

bool TUTaxa::Run(){
    Create();
    SucessTest();
    FailureTest();
    Destroy();
    return estado;
}
