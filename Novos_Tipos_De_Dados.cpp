#include <iostream>
#include <algorithm>

using namespace std;

struct Aluno{
	string nome;
	int faltas;
	double notas[3];
};

Aluno *AlocaTurma(int tamanho){
	return new Aluno[tamanho];
}

inline void DesalocaTurma(Aluno*turma){
	delete []turma;
}

void LerDadosAluno(Aluno*a){
	cout<<"Nome: ";
	cin>>a->nome;
	cout<<"Faltas: ";
	cin>>a->faltas;
	cout<<"Nota 1: ";
	cin>>a->notas[0];
	cout<<"Nota 2: ";
	cin>>a->notas[1];
	cout<<"Nota 3: ";
	cin>>a->notas[2];
}

void MostraDados(Aluno*a){
	cout<<a->nome<<endl;
	cout<<a->faltas<<endl;
	cout<<a->notas[0]<<endl;
	cout<<a->notas[1]<<endl;
	cout<<a->notas[2]<<endl;
}

inline double MediaAluno(const Aluno &a){
	return (4*a.notas[0]+5*a.notas[1]+6*a.notas[2])/15;
}

inline bool ComparaAluno(const Aluno &a,const Aluno &b){
	double mediaA=MediaAluno(a), mediaB=MediaAluno(b);
	if (mediaA>mediaB || mediaA==mediaB && a.nome<b.nome)
		return true;
	return false;
}

int main(){
	Aluno* TurmaA;
	TurmaA=AlocaTurma(2);
	TurmaA[0]={"Pedro",5,{7.5, 8.3, 5.7}};
	TurmaA[1]={"Maria", 10,{7.5, 8.3, 5.7}};
	sort(TurmaA,TurmaA+1,ComparaAluno);
	//LerDadosAluno(TurmaA);
	DesalocaTurma(TurmaA);
	return 0;
}
