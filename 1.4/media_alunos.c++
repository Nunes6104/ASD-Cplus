#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

/*****************************************************************
    Faça um programa para ler várias notas (valores inteiros)
    para vários alunos.
    1- Pedir os valores e preencher o array
    2- Listar o conteúdo do array
    3- Listar a média de cada aluno à frente das suas notas
    4- Escrever a média (do teste) no final de cada coluna
    5- Escrever a média da turma
   
    As notas são valores entre 0 e 20 (não precisa testar)
    As médias são valores com duas casas decimais

    O programa deve ter as seguintes constantes:
    "MaxAluno" para o nº de alunos (máximo 9)
    "MaxNota" para o nº de notas por aluno (máximo 9)


*************************************************************/
const int MaxNota = 3;
const int MaxAluno = 2;

int main(){

    system("cls");

    int nota[MaxNota][9], index, maxnota, somatorio = 0;
    float mediaAluno[MaxAluno], mediatotal;

    cout << "Indique o número de alunos: ";
    cin >> index;

    cout << endl << "indique o número de notas: ";
    cin >> maxnota;

    for (int i = 0; i < index; i++)
    {
        cout << endl << "Aluno " << i+1 << " :";
        for (int j = 0; j < maxnota; j++)
        {
            cin >> nota[i][j];

            if(nota[i][j] > 20 || nota[i][j] < 0)
            {
                cout << endl << "Valores da nota inválida";
                return 0;
            }

            mediatotal[j] += nota[i][j];
        }
        mediaAluno[i] = nota[i][j] / maxnota;
        int mediaExame[i]= mediatotal[j] / MaxAluno;
        
    }

    mediatotal = somatorio / index;

    for (int s = 0; s < index; s++)
    {
        cout << endl << setprecision(2) << media[s];
    }
    cout << endl << mediatotal;


    /*cout << endl << "As " << index << " notas de cada aluno foram:" << endl;
	for(int j = 0; j < index; j++)
    {
        // para cada aluno
		cout << "Aluno " << j+1 << ": ";
		cout << setprecision(2) << nota1[j] << " || " << nota2[j] << " || " << media[j] << endl;
    }
    cout << endl << "Media total dos alunos: " << setprecision(2) << mediatotal;*/

    /*cout << endl << "As " << index << " notas de cada aluno foram:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Aluno | Nota 1 | Nota 2 | Média" << endl;
    cout << "-----------------------------------------------------" << endl;
	for(int j = 0; j < index; j++)
    {
        // para cada aluno
		cout << setw(index) << j+1 << " | ";
		cout << setw(index) << nota1[j] << " | ";
        cout << setw(index) << nota2[j] << " | ";
        cout << setw(index) << setprecision(2) << media[j] << endl;
    }
    cout << "-----------------------------------------------------" << endl;
    cout << "Media total dos alunos: " << setprecision(2) << mediatotal;*/

    return 0;
}