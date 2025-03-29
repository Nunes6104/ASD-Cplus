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

const int Maxnota = 3;
const int Maxaluno = 4;
int main(){
    float medianota[Maxnota], mediapaluno[Maxaluno], mediaturma = 0;
    int nota[Maxaluno][Maxnota];

    system("cls");

    for (int i = 0; i < Maxaluno; i++)
    {
        cout << endl << "Aluno " << i+1 << " :\n";
        for (int j = 0; j < Maxnota; j++)
        {
            cin >> nota[i][j];
            if(nota[i][j] > 20 || nota[i][j] < 0)
            {
                cout << endl << "Valores da nota inválida";
                return 0;
            }

            mediapaluno[i] += nota[i][j];
            medianota[j] += nota[i][j];
        }
    }

    for (int k = 0; k < Maxaluno; k++)
    {
        mediapaluno[k] = mediapaluno[k] / Maxnota;
    }

    for (int s = 0; s < Maxnota; s++)
    {
        medianota[s] = medianota[s] / Maxaluno;
    }

    cout << "As " << Maxaluno << " notas de cada aluno foram:\n" << "        ";
    for (int i = 0; i < Maxnota; i++)
    {
        cout << setw(4) << "T" << i+1;
        for (int s = 0; s < Maxaluno; s++)
        {
            cout << setw(5) << nota[i][s];
            cout << "     Média: " << setprecision(2) << mediapaluno[i] << endl;
        }
    }
    for (int j = 0; j < Maxnota; j++)
    {
    cout << "  Média:" << setw(6) << setprecision(2) << medianota[j];
    mediaturma += mediapaluno[j];
    }
    cout << endl << "Média da turma: " << mediaturma / Maxnota;

}