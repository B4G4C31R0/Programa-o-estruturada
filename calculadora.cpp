#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double operando1, operando2, resultado;
    char operacao;
    cout<<"Digite a operação de forma número operador número: "<<endl;
    cin>>operando1>>operando2>>endl;
    
    switch(operacao){
        case '+':
            resultado= operando1 + operando2;
            break;
        case '-':
            resultado= operando1 - operando2;
            break;
        case '*':
            resultado= operando1 * operando2;
            break;
        case '/':
            resultado= operando1 / operando2;
            break;
        case '^':
            resultado= pow(operando1,operando2);
            break;
        default:
            cout<<"opção inválida"<<endl;
            return -1;
        }
    
    
    return 0;
    }
