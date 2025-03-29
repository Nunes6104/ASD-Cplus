//Escreva um programa em C++ que crie dois vetores vazios de 5 elementos inteiros cada.
//Preencha esses vetores com números fornecidos pelo utilizador.
//Crie um terceiro vetor que armazene a soma dos elementos correspondentes dos dois primeiros vetores.
//Mostre esse novo vetor.

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> myV;
    vector<int> myV2;
    vector<int> myV3;
    int add;
    for(int i = 0; i < 5; i++)
    {
        cout << "\nIndique o valor do vetor myV: ";
        cin >> add;
        myV.push_back(add);
    }
    for(auto INS : myV)
    {
        cout << "\nIndique o valor do vetor myV2: ";
        cin >> add;
        myV2.push_back(add);
    }

    for(auto ADD : myV)
    {
        add = myV[ADD] + myV2[ADD];
        myV3.push_back(add);
    }

    cout << endl << "O valor da soma dos vectors myV e myV2: ";
    for(auto SHOW : myV3)
    {
        cout << SHOW << " ";
    }
return 0;
}