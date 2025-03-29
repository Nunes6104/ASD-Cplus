#include <iostream>
#include <vector>
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
    vector<int> myVector;    // criar um vector vazio
    int val;

    cout << "\n-----------------------" << endl;
	cout << "Introduza 5 numeros inteiros" << endl;
	cout << "-----------------------" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout << endl << "Introduza o valor: ";
        cin >> val;
        myVector.push_back(val);
    }

    cout << "\n-----------------------" << endl;
	cout << "Valores no Vector" << endl;
	cout << "-----------------------" << endl;
    //for(auto &show : myVector) assim mostrava a mesma coisa mas o show iria buscar os valores do myvector por referencia
    for(auto show : myVector)
    {
        cout << show << endl;
    }

return 0;
}