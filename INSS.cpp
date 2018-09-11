#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    const double FAIXA1=1693.72, FAIXA2= 2822.90, TETO=5645.8;
    const double TAXA1=0.08, TAXA2=0.09, TAXA_TETO=0.11;
    double saliq, salbr, desc;
    cout<<"Digite o valor do salário do trabalhador: ";
    cin>> salbr;
    
    if (salbr<=FAIXA1){
        desc= TAXA1*salbr;
        }
    else if (salbr<=FAIXA2){
        desc= TAXA2*salbr;
        }
    else if (salbr<=TETO){
        desc=TAXA_TETO*salbr;
        }
    saliq=salbr-desc;
    cout<< fixed << setprecision(2);
    cout<<"O Salario liquido eh: "<< saliq << endl;
    
return 0;
}
