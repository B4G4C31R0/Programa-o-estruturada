#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double *alocaVetor(int n, double *vetor){
	vetor= new double[n];
	return vetor;
}


double *entraVetor(int n, double *vetor){
	for (int i=0; i<n; i++){
		cout<<"Digite o valor da posicao "<<i+1<<": ";
		cin>>vetor[i];
	}
	return vetor;
}


double media(int n, double *vetor){
	double m, soma=0.0;
	for (int i=0; i<n; i++){
		soma+=vetor[i];
	}
	m=soma/n;
	return m;	
}


double desvioPadrao(int n, double *vetor){
	double m, soma=0.0, desvio=0.0;
	
	for (int i=0; i<n; i++){
		soma+=vetor[i];
	}
	m=soma/n;
	
	for (int i=0; i<n; i++){
		desvio+= pow(vetor[i]-m,2);
	}
	desvio= sqrt(desvio/n);
	
	return desvio;	
}


void exibeVetor(int n, double *vetor){
	cout<<"V= ["<<vetor[0]<<", ";
	for (int i=1; i<n-1; i++){
		cout<<vetor[i]<<", ";
	}
	cout<<vetor[n-1]<<"]"<<endl;
}


void ordenaVetor(int n, double *vetor){
	cout<<"Vetor Ordenado: "<<endl;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (vetor[i]>vetor[j]){
				double aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
	cout<<"V= ["<<vetor[0]<<", ";
	for (int i=1; i<n-1; i++){
		cout<<vetor[i]<<", ";
	}
	cout<<vetor[n-1]<<"]"<<endl;
}


int main() {
	int n;
	double *t, med, desv;
	
	cout<<"Qual o tamanho do vetor? ";
	cin>>n;
	
	t=alocaVetor(n,t);
	t=entraVetor(n,t);
	exibeVetor(n,t);
	med=media(n,t);
	desv=desvioPadrao(n,t);
	cout<<"Media do vetor: "<<med<<endl;
	cout<<"Desvio padrão é: "<<desv<<endl;
	ordenaVetor(n, t);
	delete []t;
	
	
	return 0;
}
