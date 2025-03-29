//Escreva um programa em C++ que pergunte ao utilizador qual deve ser a dimensão do vetor (não se preocupe com as validações).
//Preencha o vetor de inteiros com dados fornecidos pelo utilizador.
//Ordene os elementos por ordem crescente
//Mostre o vetor resultante.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> myV;
    int dim, add;
    cout << "Qual a dimensão do vector: ";
    cin >> dim;

    for(int i = 0; i < dim; i++)
    {
        cout << endl << "Indique um valor: ";
        cin >> add;
        myV.push_back(add);
    }

    sort(myV.begin(), myV.end());
    cout << endl << "Valores do vetor ordenados: " << endl;
    for(auto SHOW : myV)
    {
        cout << SHOW << " ";
    }
return 0;
}