#include <iostream>

using namespace std;

int soma(int a, int b){
	return a+b;
}

int subtracao(int a, int b){
	return a-b;
}

int multiplicacao(int a, int b){
	return a*b;
}

int divisao(int a, int b){
	return a/b;
}

int main() {
	int (*operacao)(int,int), x, y;
	cin>>x>>y;
	operacao=soma;
	cout<<operacao(x,y)<<endl;
	operacao=subtracao;
	cout<<operacao(x,y)<<endl;
	operacao=multiplicacao;
	cout<<operacao(x,y)<<endl;
	operacao=divisao;
	cout<<operacao(x,y)<<endl;
	
	return 0;
}
