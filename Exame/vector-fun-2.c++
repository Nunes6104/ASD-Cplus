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
bool removeX(vector<int>&vec, int val)
{
    bool result = false;
    for(size_t i = 0; i < vec.size(); i++)
    {
        if(vec.at(i) == val)
        {
            vec.erase(vec.begin()+i);
            result = true;
        }
    }
    return result;
}
bool isSorted(const vector<int>&vec)
{
    bool ascendent = true, descendent = false;
    if(vec.size() < 2)
    {
        return true;
    }
    //para ordem decrescente
    for(size_t i = 0; i < vec.size()-1; i++)
    {
        if(vec.at(i) > vec.at(i+1))
        {
            ascendent = false;
            break;
        }
    }
    //para ordem crescente
    for(size_t i = 0; i <= vec.size()-1; i++)
    {
        if(vec.at(i) < vec.at(i+1))
        {
            descendent = false;
            break;
        }
    }
    return ascendent || descendent;
}

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
void delDup(vector<string>&vec)
{
    for(size_t i = 0; i < vec.size(); i++)
    {
        for(size_t j = 1; j < vec.size(); j++)
        {
            if(i == j);
            else if(vec[i] == vec[j])
            {
                vec.erase(vec.begin()+j);
            }   
        }
    }
}
int main ()
{
    vector<int> VectorInt = {1, 2, 3, 4};
    vector<string> VectorString = {"Maria", "Ana", "Maria", "Diogo", "Rui", "Maria"};
    listInt(VectorInt);
    isSorted(VectorInt);
    int val;
    cout << "\n-----------------------" << endl;
	cout << "Indique um valor para remover" << endl;
	cout << "-----------------------" << endl;
    cout << "Valor: ";
    cin >> val;
    removeX(VectorInt, val);
    listInt(VectorInt);
    listString(VectorString);
    delDup(VectorString);
    cout << "\n-----------------------" << endl;
	cout << "Lista de strings listada" << endl;
	cout << "-----------------------" << endl;
    listString(VectorString);
return 0;
}