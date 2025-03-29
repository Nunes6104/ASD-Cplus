//Escreva um programa em C++ que crie um vetor de 7 elementos inteiros predefinidos.
//Peça ao utilizador um número inteiro para pesquisar no vetor.
//Se o número estiver presente no vetor, mostre a respetiva posição. Caso contrário, escreva que não foi encontrado.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> myV = {1, 2, 3, 5, 7, 8, 10};
    int search;
    cout << "Indique um numero: ";
    cin >> search;

    auto IT = find(myV.begin(), myV.end(), search);
    if(IT != myV.end())
    cout <<"\nEncontrou no indice: " << (size_t)distance(myV.begin(), IT);
    else cout << "\nIndice não encontrado";
    
return 0;
}