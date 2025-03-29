//Escreva um programa em C++ que preencha um vetor de números reais com 10 elementos fornecidos pelo utilizador.
//Calcule a média dos elementos do vetor.
// Mostre o resultado.

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<float> myV;
    float add, count = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "\nIndique o valor do vetor: ";
        cin >> add;
        myV.push_back(add);
        count += add;
    }
    float avarage = count / myV.size();

    for(auto SHOW : myV)
    {
        cout << endl << SHOW << " ";
    }
    cout << endl << "A media dos valores deste vector é: " << avarage;
    
return 0;
}