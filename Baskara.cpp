#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta, x1, x2;
    cout<<"Digite os coeficientes da equacao do 2o grau nessa ordem: ";
    cin>>a>>b>>c;
    delta= b*b - 4*a*c;
    
    if (delta<0){
        cout <<"A equacao nao possui raizes reais. "<<endl;
        }
    else if(delta==0){
        cout<<"A equacao possui apenas uma raiz real. "<<endl;
        x1=-b/(2*a);
        cout<<"A raiz eh: "<<x1<<endl;
        }
    else{
        cout<<"A equacao possui duas raizes reais. "<<endl;
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<"As duas raizes encontradas foram: "<<x1<<' '<<x2<<endl;
        }
        
    return 0;
    }
