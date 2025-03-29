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
void listInt(const vector<int>&vec)
{
    for(auto show : vec)
    {
        cout << show << " - ";
    }
}
void listString(const vector<string>&vec)
{
    cout << endl;
    for(auto show : vec)
    {
        cout << show << endl;
    }
}
int main ()
{
    vector<int> VectorInt = {1, 2, 3, 4};
    vector<string> VectorString = {"Maria", "Ana", "Rui", "Diogo"};
    listInt(VectorInt);
    listString(VectorString);

return 0;
}