#include <iostream>
#include <string>
using namespace std;

struct el
{
   string nome;
   int idade;
    el *next;
};

el *pHead = nullptr;
el *pTail = nullptr;//só para a fila
void getData( el *elemento ){
    cout << "\nDados da pessoa"
         << "\n---------------\n";
    cout << " Nome: "; cin.ignore(); getline(cin, elemento->nome);
    cout << "Idade: "; cin >> elemento->idade;
    cout << endl;
}

bool QinsTail()
{
    el *pnovo = new(nothrow) el;
    if(!pnovo) return false;
    getData(pnovo);
    pnovo->next = nullptr;
    if(!pHead)
        pHead = pnovo;
    else pTail ->next = pnovo;

    pTail = pnovo;
    return true;
}

bool QDelHead(){
    el * pDel = pHead;
    if(!pHead)
    {
        return false;
    }
    if(!pHead -> next)
    {
        pTail = nullptr;
    }
    pHead = pHead -> next;
    delete pDel;
    return true;
}
