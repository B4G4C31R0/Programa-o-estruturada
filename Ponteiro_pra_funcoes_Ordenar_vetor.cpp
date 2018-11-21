#include <iostream>
#include <cstring>

using namespace std;

bool comparaSimples (string a, string b){
	return a>b;
}

bool ignoraMaiusculas(string a, string b){
	return strcasecmp(a.c_str(),b.c_str())>0;
}

void ordenaVetor(string vetor[], int tam, bool (*compara)(string, string)){
	for (int i=0; i<tam; i++)
		for (int j=i+1; j<tam; j++)
			if (compara(vetor[i],vetor[j])){
				string aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
	for (int i=0; i<tam; i++){
		cout<<vetor[i]<<" ";
	}cout<<endl;
}

int main(){
	
	string alunos[5]={"Emidio", "andre", "Claudionor", "renato", "william"};
	ordenaVetor(alunos, 5, comparaSimples);
	ordenaVetor(alunos, 5, ignoraMaiusculas);
	
	
	return 0;
}
