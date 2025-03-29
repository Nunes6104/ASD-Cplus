#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Um vector é basicamente um array clássico, com a gestão de memória feita automaticamente
    isto permite inserir ou apagar elementos, entre outras ações.
    Notas:
    - pode acontecer uma realocação do espaço, o que tem custos de espaço e velocidade
    - idealmente só se devem acrescentar/remover elementos no final do vector
    - o vector faz a sua própria gestão de memória, o que significa que se pode usar
      o operador = para fazer uma cópia (deep copy)

    Este programa mostra vários dos métodos do vector:
        .assign()   .at()           .front()        .back()         <== aceder ao elemento (read/write)
        .size()     .empty()        .data()
        .insert()   .push_back()
        .erase()    .pop_back()     .clear()    
        .begin()    .end()          .rbegin()       .rend()         <== devolvem iterador
        .cbegin()   .cend()         .crbegin()      .crend()        <== devolvem iterador constante
    
    Existe uma função que permite trocar 2 vetores que sejam do mesmo tipo (não depende da dimensão)
        swap( vector1, vector2 )
*/

int main ()
{
    vector<int> myVector1;    // criar um vector vazio
    int val, dim;

    cout << "\nQual a Dimensão do Vector: ";
    cin >> dim;
    if(dim < 1)
    {
        cout << "Dimensão Impossível";
        return 8;
    }
    cout << "\n-----------------------" << endl;
	cout << "Introduza " << dim << " valores no Vector1" << endl;
	cout << "-----------------------" << endl;
    for (size_t i = 0; i < dim; i++)
    {
        cout << endl << "Introduza o valor: ";
        cin >> val;
        myVector1.push_back(val);
    }
    cout << "\n-----------------------" << endl;
	cout << "Valores Listados" << endl;
	cout << "-----------------------" << endl;
    for(auto show : myVector1)
    {
        cout << show << endl;
    }
    cout << "\n-----------------------" << endl;
	cout << "Valores Listados Ordenados" << endl;
	cout << "-----------------------" << endl;
    //para dar sort é necessário usar os iteradores
    sort(myVector1.begin(), myVector1.end());
    for(auto show : myVector1)
    {
        cout << show << endl;
    }
return 0;
}