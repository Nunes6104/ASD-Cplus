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
    vector<float> myVector;    // criar um vector vazio
    float val, soma = 0;

    cout << "\n-----------------------" << endl;
	cout << "Introduza 10 numeros reais" << endl;
	cout << "-----------------------" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cout << endl << "Introduza o valor: ";
        cin >> val;
        myVector.push_back(val);
        soma += val;
    }
    //para ver quantos elementos tem
    //myVector.size();
    float result = soma / myVector.size();
    cout << "\n-----------------------" << endl;
	cout << "Média dos Números no vector" << endl;
	cout << "-----------------------" << endl;
    cout << result;
return 0;
}