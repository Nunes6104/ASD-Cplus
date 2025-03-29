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
	
	// ler, usando um ciclo de repetição, os nomes e idades para cada pessoa
	cout << "\n-----------------------" << endl;
	cout << "Dados para as 3 pessoas" << endl;
	cout << "-----------------------" << endl;
	// escreva aqui o código :-)
    for(size_t i = 0; i < 3; i++)
    {
        cout << "Insira o Nome da pessoa:";
        // Na 1ª passagem pelo loop, ainda não se usou nenhum cin
		// antes do getline, pelo que não se pode incluir o cin.ignore()
		if(i) cin.ignore();// para poder misturar cin com cin.getline()
		// Relembrar que no C qualquer coisa diferente de ZERO
		// é interpretada como true
        cin.getline(turma[i].nome, 81);
        
        cout << endl << "Insira a Idade:";
        cin >> turma[i].idade;
    }
	
	//	Escrever, usando um ciclo de repetição, os nomes e idades para cada pessoa
	cout << "\n-------------------------" << endl;
	cout << "Dados lidos das 3 pessoas" << endl;
	cout << "-------------------------" << endl;
	// escreva aqui o código :-)
    for(size_t i = 0; i < 3; i++)
    {
        cout << endl << "Nome " << i+1 << ": " << turma[i].nome;
        cout << endl << "Idade " << i+1 << ": " << turma[i].idade;
    }
    
	
	cout << "\n---------------------------" << endl;
	cout << "Listagem por ordem de idade" << endl;
	cout << "---------------------------" << endl;
	// Pai de todos os desafios:
	// escrever os dados das 3 pessoas, ordenados por idade
    pes aux;
    if(turma[0].idade > turma[1].idade)
    {
        aux = turma[0];
        turma[0] = turma[1];
        turma[1] = aux;
    }
    if(turma[0].idade > turma[2].idade)
    {
        aux = turma[0];
        turma[0] = turma[2];
        turma[2] = aux;
    }
    if(turma[1].idade > turma[2].idade)
    {
        aux = turma[1];
        turma[1] = turma[2];
        turma[2] = aux;
    }
    for(size_t i = 0; i < 3; i++)
    {
        cout << endl << "Nome " << i+1 << ": " << turma[i].nome;
        cout << endl << "Idade " << i+1 << ": " << turma[i].idade << endl;
    }

	return 0;
}