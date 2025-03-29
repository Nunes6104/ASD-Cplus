#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> nomes = {"Jorge", "Ana"};
    for(auto El : nomes)
    {
        cout << El << endl;
    }

    nomes.push_front("Paulo");
    for(auto El : nomes)
    {
        cout << El << endl;
    }
    nomes.insert(nomes.begin(), 2, "Tó");//o dois repete o list

    //inserir na quarta posição
    list<string> :: iterator it = nomes.begin();
    for(size_t i = 1; i < 4; i++) it++;
    nomes.insert(it, "Maria");
    cout << endl;
    for(auto El : nomes)
    {
        cout << El << endl;
    }
}