#include <iostream>

using namespace std;

int main(){
    const double insc_aluno=30.0,insc_prof=70.0, insc_merc=100.0, MINICURSO=20.0;
    const double taxa_debito=0.0199, taxa_credito= 0.0498;
    const int aluno=1, professor=2, profissional=3, boleto=1, debito=2, credito=3;
    int tipoInscricao, formaPagamento;
    char minicurso;
    double valorTotal;
    cout << "Digite o tipo de inscrição:\n1 - ALUNO\n2 - PROFESSOR\n3 - PROFISSIONAL DO MERCADO\n";
    cin >> tipoInscricao;
    
    switch(tipoInscricao){
        case aluno:
            valorTotal=insc_aluno;
            break;
        case professor:
            valorTotal=insc_prof;
            break;
        case profissional:
            valorTotal=insc_merc;
            break;
        default:
            cout<<"Opção inválida"<<endl;
            return -1;
        }
        
    cout<<"Incluir minicurso? Digite S (sim) ou N (não)" <<endl;
    cin>>minicurso;
        
    switch (minicurso){
        case 's':
        case 'S':
            valorTotal+=MINICURSO;
            break;
        case 'n':
        case 'N':
            break;
        default:
            cout << "Opção Inválida" << endl;
            return -1;
        }
    
    cout<<"Qual a forma de pagamento:\n1 - BOLETO\n2 - DÉBITO\n3 - CRÉDITO";
    cin>> formaPagamento;
    switch(formaPagamento){
        case boleto:
            break;
        case debito:
            valorTotal*=1+taxa_debito
        case credito:
            valorTotal*=1+taxa_credito
        }
        
    return 0;
    }
