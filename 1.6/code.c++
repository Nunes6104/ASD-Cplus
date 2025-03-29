#include <iostream>
#include <string.h>
using namespace std;

// Definição da estrutura. Não implica reserva de espaço
// Criar um tipo novo chamado "pes"
struct pes {
	char nome[81];	//campo nome
	int idade;		//campo idade
};

int main(int argc, char** argv) {
	// para fazer um conjunto de pessoas
	pes turma[3]; // array de estruturas
    pes aux;
	
	// ler, usando um ciclo de repetição, os nomes e idades para cada pessoa
	cout << "\n-----------------------" << endl;
	cout << "Dados para as 3 pessoas" << endl;
	cout << "-----------------------" << endl;
	// escreva aqui o código :-)

    for(int i = 0; i < 3; i++)
    {        
        cout << "Indique o nome: ";
        if(i) cin.ignore();
        cin.getline (turma[i].nome, 81);
        cout << "Indique a idade: ";
        cin >> turma[i].idade;
    }
	
	//	Escrever, usando um ciclo de repetição, os nomes e idades para cada pessoa
	cout << "\n-------------------------" << endl;
	cout << "Dados lidos das 3 pessoas" << endl;
	cout << "-------------------------" << endl;
	// escreva aqui o código :-)

    for(int i = 0; i < 3; i++)
    {
        cout << endl << "Nome: " << turma[i].nome;
        cout << endl << "Idade: " << turma[i].idade;
    }
	
	cout << "\n---------------------------" << endl;
	cout << "Listagem por ordem de idade" << endl;
	cout << "---------------------------" << endl;
	// Pai de todos os desafios:
	// escrever os dados das 3 pessoas, ordenados por idade
        if(turma[1].idade > turma[2].idade)
        {
            aux = turma[1];
            turma[1] = turma[2];
            turma[2] = aux;
        }
        if(turma[1].idade > turma[3].idade)
        {
            aux = turma[1];
            turma[1] = turma[3];
            turma[3] = aux;
        }
        if(turma[2].idade > turma[3].idade)
        {
            aux = turma[2];
            turma[3] = turma[2];
            turma[3] = aux;
        }
    for (int i = 0; i < 3; i++)
    {
        cout << endl << "Nome: " << turma[i].nome;
        cout << endl << "Idade: " << turma[i].idade;
    }

	return 0;
}