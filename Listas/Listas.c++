#include <iostream>
using namespace std;

//Pilha
struct EL{
    string Nome; //dados
    EL *next;
}*pHead = nullptr;

bool insHead()
{
        //criar elemento
    //mesma instrução
    /*EL *pnovo = nullptr;
    pnovo = new(nothrow) EL;*/
    EL *pnovo = new(nothrow) EL;
    if(!pnovo) return false;
    //Endreçar uma string
    cout << "Intruduza o nome: ";
    cin >> pnovo->Nome;

    /*if(!pHead)
    {
    pnovo->next = nullptr;
    }
    else */
    pnovo->next = pHead;
    pHead = pnovo;
    return true;
}

int main()
{
    //delete()
    //listar
    
}