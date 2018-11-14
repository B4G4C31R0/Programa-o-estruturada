#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double *entraVetor(int n, double vetor[]){
	for (int i=0; i<n; i++){
		cout<<"Digite o valor da posicao "<<i+1<<": ";
		cin>>vetor[i];
	}
	return vetor;
}


/*double media(int n, double *vetor){
	double m, soma=0.0;
	for (int i=0; i<n; i++){
		soma+=vetor[i];
	}
	m=soma/n;
	return m;	
}*/


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


void exibeVetor(int n, double vetor[]){
	cout<<"V=["<<vetor[0]<<", ";
	for (int i=1; i<n-1; i++){
		cout<<vetor[i]<<", ";
	}
	cout<<vetor[n-1]<<"]"<<endl;
}


void ordenaVetor(int n, double vetor[]){
	cout<<"Vetor Ordenado: "<<endl;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (vetor[i]>vetor[j]){
				double aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
	cout<<"V=["<<vetor[0]<<", ";
	for (int i=1; i<n-1; i++){
		cout<<vetor[i]<<", ";
	}
	cout<<vetor[n-1]<<"]"<<endl;
}


double mediaDesvio(int n, double vetor[], double &media, double &desvio){
	media=desvio=0.0;
	for (int i=0; i<n; i++)
		media+=vetor[i];
	media=media/n;
	
	for (int i=0; i<n; i++)
		desvio+= pow(vetor[i]-media,2);
	desvio= sqrt(desvio/n);
}


int main() {
	int n;
	double p;
	double notas[]={3.5, 4.5, 8.2, 2.9}, media, desviop;
	exibeVetor(4, notas);
	ordenaVetor(4, notas);
	mediaDesvio(4,notas,media,desviop);
	cout<<media<<" "<<desviop<<endl;
	
	
	return 0;
}
